use32

%include "kernel/src/consts.asm"

extern _base
extern _bss
extern _rodata_end
extern _end
extern main
extern phys_init_regions
extern isrs_init

global start
global panic_unwind_capture_state

; 16 bit start code:
start:
    incbin "target/loader/stage1.bin"

; the kernel is linked with base = 0xc0000000, but the early bootloader
; places us at 0x8000 without paging enabled. we need to be careful in this
; early phase to translate symbol addresses to physical addresses:
%define EARLY_PHYS(addr) ((addr) - KERNEL_BASE + KERNEL_PHYS_BASE)

use32
protected_mode:
    ; zero bss pages
    xor eax, eax
    mov edi, EARLY_PHYS(_bss)
    mov ecx, _end
    sub ecx, _bss
    shr ecx, 2 ; div 4
    rep stosd

    ; set up recursive pd map
    mov eax, EARLY_PHYS(early_pd)
    or eax, PAGE_PRESENT | PAGE_WRITABLE
    mov [EARLY_PHYS(early_pd) + 1023 * 4], eax

    ; set up pd entry for pt 0
    mov eax, EARLY_PHYS(early_pt_0)
    or eax, PAGE_PRESENT | PAGE_WRITABLE
    mov dword [EARLY_PHYS(early_pd)], eax

    ; identity map first MiB of phys memory, except null page
    mov esi, 0x1000
.map_low:
    mov eax, esi
    or eax, PAGE_PRESENT | PAGE_WRITABLE
    mov ebx, esi
    shr ebx, 12
    mov dword [EARLY_PHYS(early_pt_0) + ebx * 4], eax
    add esi, PAGE_SIZE
    cmp esi, 0x100000
    jb .map_low

    ; setup pd entry for pt k
    mov eax, EARLY_PHYS(early_pt_k)
    or eax, PAGE_PRESENT | PAGE_WRITABLE
    mov dword [EARLY_PHYS(early_pd) + ((0xc0000000 >> 22) * 4)], eax

    ; map kernel in pt k
    mov edi, EARLY_PHYS(early_pt_k)
    mov esi, _base
.map_kernel:
    ; build pt k entry
    mov eax, esi
    sub eax, KERNEL_BASE - KERNEL_PHYS_BASE
    or eax, PAGE_PRESENT
    cmp esi, _rodata_end
    jb .no_write
    or eax, PAGE_WRITABLE
.no_write:
    stosd
    ; compare to end
    add esi, PAGE_SIZE
    cmp esi, _end
    jb .map_kernel

    ; set cr3
    mov eax, EARLY_PHYS(early_pd)
    mov cr3, eax

    ; enable paging
    mov eax, cr0
    or eax, 1 << 31
    mov cr0, eax

    ; jump to kernel in higher half
    mov eax, higher_half
    jmp eax

higher_half:
    ; unmap stack guard
    mov ebx, stackguard
    shr ebx, 12
    mov [0xffc00000 + ebx * 4], dword 0

    ; set up kernel stack
    mov esp, stackend
    xor ebp, ebp

    ; init phys allocator
    mov eax, [EARLY_MEMORY_MAP_LEN]
    push eax
    push EARLY_MEMORY_MAP
    call phys_init_regions
    add esp, 8

    ; unmap low memory
    xor eax, eax
    mov edi, PAGE_TABLES
    mov ecx, 1024
    rep stosd

    ; flush TLB
    mov eax, cr3
    mov cr3, eax

    ; point tss base to tss
    mov eax, tss
    mov [gdt.tss_base_0_15], ax
    shr eax, 16
    mov [gdt.tss_base_16_23], al
    mov [gdt.tss_base_24_31], ah

    ; reload GDT in high memory
    lgdt [gdtr]

    ; load tss
    mov ax, SEG_TSS
    ltr ax

    ; initialize interrupts
    call isrs_init

    ; enable interrupts
    sti

    push 0
    jmp main

; This function is a little tricky. For the unwinder to work we need to capture
; the state of the call stack as it exists. Returning ESP and RA would mess up
; the top of the stack so instead we need to pass this data to a callback.
;
; The callback also needs an opaque data pointer so that we can access context
; in this callback without passing the context through globals.
;
; extern "C" {
;     fn panic_unwind_capture_state(
;         data: *mut c_void,
;         f: extern fn(data: *mut c_void, reg: *const CReg),
;     );
; }
panic_unwind_capture_state:
    ; set up frame pointer
    push ebp
    mov ebp, esp

    ; load + push return address
    mov eax, [ebp + 4]
    push eax

    ; load + push what stack pointer would have been
    lea eax, [ebp + 8]
    push eax

    ; push pointer to CReg on stack
    push esp

    ; push cb arg
    mov eax, [ebp + 8]
    push eax

    ; load func arg
    mov eax, [ebp + 12]
    call eax

    ; tear down frame pointer and return
    mov esp, ebp
    pop ebp
    ret

section .data
gdtr:
    dw (gdt.end - gdt) - 1 ; size
    dd gdt                 ; offset

gdt:
    ; null entry
    dq 0
    ; code entry
    dw 0xffff       ; limit 0:15
    dw 0x0000       ; base 0:15
    db 0x00         ; base 16:23
    db 0b10011010   ; access byte - code
    db 0xcf         ; flags/(limit 16:19). 4 KB granularity + 32 bit mode flags
    db 0x00         ; base 24:31
    ; data entry
    dw 0xffff       ; limit 0:15
    dw 0x0000       ; base 0:15
    db 0x00         ; base 16:23
    db 0b10010010   ; access byte - data
    db 0xcf         ; flags/(limit 16:19). 4 KB granularity + 32 bit mode flags
    db 0x00         ; base 24:31
    ; tss entry
    dw TSS_SIZE     ; limit 0:15
    .tss_base_0_15  dw 0
    .tss_base_16_23 db 0
    db 0x89         ; access byte - tss
    db 0x40         ; flags/(limit 16:19)
    .tss_base_24_31 db 0
.end:

global tss
tss:
    dd 0            ; link
    dd stackend     ; esp0
    dd SEG_KDATA    ; ss0
    times (TSS_IOPB_OFFSET - (4 * 3)) db 0 ; skip unused fields
    dw 0            ; reserved
    dw TSS_SIZE     ; iopb offset

section .bss
    align PAGE_SIZE
    early_pd    resb PAGE_SIZE
    early_pt_0  resb PAGE_SIZE
    early_pt_k  resb PAGE_SIZE
    memory_map  resb PAGE_SIZE
    global temp_page
    temp_page   resb PAGE_SIZE

section .stack
    global stackguard
    align PAGE_SIZE
    stackguard times PAGE_SIZE db 0
    global stack
    stack times 8 * PAGE_SIZE db 0
    global stackend
    stackend equ $
