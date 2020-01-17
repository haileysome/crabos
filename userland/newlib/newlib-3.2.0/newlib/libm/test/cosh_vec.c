#include "test.h"
 one_line_type cosh_vec[] = {
{63, 0,123,__LINE__, 0x3ffcf871, 0xf8dfa802, 0xbff33333, 0x33333333},			/* 1.81065=f(-1.20000)*/
{58, 0,123,__LINE__, 0x3ffcbafc, 0xca475e1f, 0xbff30a3d, 0x70a3d70a},			/* 1.79565=f(-1.19000)*/
{63, 0,123,__LINE__, 0x3ffc7e43, 0xe5bb3dd8, 0xbff2e147, 0xae147ae1},			/* 1.78082=f(-1.18000)*/
{61, 0,123,__LINE__, 0x3ffc4245, 0xbd476b73, 0xbff2b851, 0xeb851eb8},			/* 1.76618=f(-1.17000)*/
{64, 0,123,__LINE__, 0x3ffc0700, 0xc7bfd6ca, 0xbff28f5c, 0x28f5c28f},			/* 1.75171=f(-1.16000)*/
{64, 0,123,__LINE__, 0x3ffbcc73, 0x80b62a84, 0xbff26666, 0x66666666},			/* 1.73741=f(-1.15000)*/
{64, 0,123,__LINE__, 0x3ffb929c, 0x686fda70, 0xbff23d70, 0xa3d70a3d},			/* 1.72329=f(-1.14000)*/
{64, 0,123,__LINE__, 0x3ffb597a, 0x03dc50b7, 0xbff2147a, 0xe147ae14},			/* 1.70934=f(-1.13000)*/
{61, 0,123,__LINE__, 0x3ffb210a, 0xdc8b399b, 0xbff1eb85, 0x1eb851eb},			/* 1.69556=f(-1.12000)*/
{63, 0,123,__LINE__, 0x3ffae94d, 0x80a2ed80, 0xbff1c28f, 0x5c28f5c2},			/* 1.68195=f(-1.11000)*/
{59, 0,123,__LINE__, 0x3ffab240, 0x82d6f90f, 0xbff19999, 0x99999999},			/* 1.66851=f(-1.10000)*/
{63, 0,123,__LINE__, 0x3ffa7be2, 0x7a5ec32e, 0xbff170a3, 0xd70a3d70},			/* 1.65524=f(-1.09000)*/
{62, 0,123,__LINE__, 0x3ffa4632, 0x02ec508a, 0xbff147ae, 0x147ae147},			/* 1.64213=f(-1.08000)*/
{62, 0,123,__LINE__, 0x3ffa112d, 0xbca32482, 0xbff11eb8, 0x51eb851e},			/* 1.62919=f(-1.07000)*/
{63, 0,123,__LINE__, 0x3ff9dcd4, 0x4c0f3f1f, 0xbff0f5c2, 0x8f5c28f5},			/* 1.61641=f(-1.06000)*/
{63, 0,123,__LINE__, 0x3ff9a924, 0x5a1c3817, 0xbff0cccc, 0xcccccccc},			/* 1.60379=f(-1.05000)*/
{63, 0,123,__LINE__, 0x3ff9761c, 0x940c7647, 0xbff0a3d7, 0x0a3d70a3},			/* 1.59133=f(-1.04000)*/
{62, 0,123,__LINE__, 0x3ff943bb, 0xab7083c1, 0xbff07ae1, 0x47ae147a},			/* 1.57903=f(-1.03000)*/
{63, 0,123,__LINE__, 0x3ff91200, 0x561e7e0c, 0xbff051eb, 0x851eb851},			/* 1.56689=f(-1.02000)*/
{64, 0,123,__LINE__, 0x3ff8e0e9, 0x4e29a24a, 0xbff028f5, 0xc28f5c28},			/* 1.55491=f(-1.01000)*/
{59, 0,123,__LINE__, 0x3ff8b075, 0x51d9f54f, 0xbfefffff, 0xfffffffe},			/* 1.54308=f(-0.01000)*/
{58, 0,123,__LINE__, 0x3ff880a3, 0x23a40720, 0xbfefae14, 0x7ae147ac},			/* 1.53140=f(-0.99000)*/
{64, 0,123,__LINE__, 0x3ff85171, 0x8a20d1e6, 0xbfef5c28, 0xf5c28f5a},			/* 1.51988=f(-0.98000)*/
{64, 0,123,__LINE__, 0x3ff822df, 0x5005b406, 0xbfef0a3d, 0x70a3d708},			/* 1.50851=f(-0.97000)*/
{64, 0,123,__LINE__, 0x3ff7f4eb, 0x441c8516, 0xbfeeb851, 0xeb851eb6},			/* 1.49729=f(-0.96000)*/
{64, 0,123,__LINE__, 0x3ff7c794, 0x393bc5a6, 0xbfee6666, 0x66666664},			/* 1.48622=f(-0.95000)*/
{63, 0,123,__LINE__, 0x3ff79ad9, 0x063ee989, 0xbfee147a, 0xe147ae12},			/* 1.47530=f(-0.94000)*/
{61, 0,123,__LINE__, 0x3ff76eb8, 0x85febc75, 0xbfedc28f, 0x5c28f5c0},			/* 1.46453=f(-0.93000)*/
{63, 0,123,__LINE__, 0x3ff74331, 0x9749e0c5, 0xbfed70a3, 0xd70a3d6e},			/* 1.45390=f(-0.92000)*/
{61, 0,123,__LINE__, 0x3ff71843, 0x1cdd683c, 0xbfed1eb8, 0x51eb851c},			/* 1.44342=f(-0.91000)*/
{62, 0,123,__LINE__, 0x3ff6edeb, 0xfd5d867d, 0xbfeccccc, 0xccccccca},			/* 1.43308=f(-0.90000)*/
{61, 0,123,__LINE__, 0x3ff6c42b, 0x234e5d23, 0xbfec7ae1, 0x47ae1478},			/* 1.42289=f(-0.89000)*/
{63, 0,123,__LINE__, 0x3ff69aff, 0x7d0ce134, 0xbfec28f5, 0xc28f5c26},			/* 1.41284=f(-0.88000)*/
{64, 0,123,__LINE__, 0x3ff67267, 0xfcc7d9d2, 0xbfebd70a, 0x3d70a3d4},			/* 1.40293=f(-0.87000)*/
{60, 0,123,__LINE__, 0x3ff64a63, 0x9878f7e8, 0xbfeb851e, 0xb851eb82},			/* 1.39316=f(-0.86000)*/
{63, 0,123,__LINE__, 0x3ff622f1, 0x49de06d1, 0xbfeb3333, 0x33333330},			/* 1.38353=f(-0.85000)*/
{63, 0,123,__LINE__, 0x3ff5fc10, 0x0e72357b, 0xbfeae147, 0xae147ade},			/* 1.37403=f(-0.84000)*/
{57, 0,123,__LINE__, 0x3ff5d5be, 0xe7677840, 0xbfea8f5c, 0x28f5c28c},			/* 1.36468=f(-0.83000)*/
{64, 0,123,__LINE__, 0x3ff5affc, 0xd9a002ef, 0xbfea3d70, 0xa3d70a3a},			/* 1.35546=f(-0.82000)*/
{64, 0,123,__LINE__, 0x3ff58ac8, 0xeda7db19, 0xbfe9eb85, 0x1eb851e8},			/* 1.34638=f(-0.81000)*/
{64, 0,123,__LINE__, 0x3ff56622, 0x2fae8258, 0xbfe99999, 0x99999996},			/* 1.33743=f(-0.80000)*/
{64, 0,123,__LINE__, 0x3ff54207, 0xaf80b86e, 0xbfe947ae, 0x147ae144},			/* 1.32862=f(-0.79000)*/
{64, 0,123,__LINE__, 0x3ff51e78, 0x80825514, 0xbfe8f5c2, 0x8f5c28f2},			/* 1.31993=f(-0.78000)*/
{63, 0,123,__LINE__, 0x3ff4fb73, 0xb9a8394f, 0xbfe8a3d7, 0x0a3d70a0},			/* 1.31139=f(-0.77000)*/
{64, 0,123,__LINE__, 0x3ff4d8f8, 0x7572582a, 0xbfe851eb, 0x851eb84e},			/* 1.30297=f(-0.76000)*/
{64, 0,123,__LINE__, 0x3ff4b705, 0xd1e5d6a5, 0xbfe7ffff, 0xfffffffc},			/* 1.29468=f(-0.75000)*/
{63, 0,123,__LINE__, 0x3ff4959a, 0xf08742b7, 0xbfe7ae14, 0x7ae147aa},			/* 1.28652=f(-0.74000)*/
{64, 0,123,__LINE__, 0x3ff474b6, 0xf654e136, 0xbfe75c28, 0xf5c28f58},			/* 1.27849=f(-0.73000)*/
{64, 0,123,__LINE__, 0x3ff45459, 0x0bc11295, 0xbfe70a3d, 0x70a3d706},			/* 1.27059=f(-0.72000)*/
{64, 0,123,__LINE__, 0x3ff43480, 0x5cacce30, 0xbfe6b851, 0xeb851eb4},			/* 1.26281=f(-0.71000)*/
{64, 0,123,__LINE__, 0x3ff4152c, 0x1862342d, 0xbfe66666, 0x66666662},			/* 1.25516=f(-0.70000)*/
{63, 0,123,__LINE__, 0x3ff3f65b, 0x718f359f, 0xbfe6147a, 0xe147ae10},			/* 1.24764=f(-0.69000)*/
{64, 0,123,__LINE__, 0x3ff3d80d, 0x9e4052f4, 0xbfe5c28f, 0x5c28f5be},			/* 1.24024=f(-0.68000)*/
{62, 0,123,__LINE__, 0x3ff3ba41, 0xd7db706d, 0xbfe570a3, 0xd70a3d6c},			/* 1.23297=f(-0.67000)*/
{59, 0,123,__LINE__, 0x3ff39cf7, 0x5b1ac090, 0xbfe51eb8, 0x51eb851a},			/* 1.22582=f(-0.66000)*/
{62, 0,123,__LINE__, 0x3ff3802d, 0x6807c462, 0xbfe4cccc, 0xccccccc8},			/* 1.21879=f(-0.65000)*/
{64, 0,123,__LINE__, 0x3ff363e3, 0x41f6615e, 0xbfe47ae1, 0x47ae1476},			/* 1.21188=f(-0.64000)*/
{63, 0,123,__LINE__, 0x3ff34818, 0x2f800cf6, 0xbfe428f5, 0xc28f5c24},			/* 1.20510=f(-0.63000)*/
{64, 0,123,__LINE__, 0x3ff32ccb, 0x7a7f0d82, 0xbfe3d70a, 0x3d70a3d2},			/* 1.19843=f(-0.62000)*/
{64, 0,123,__LINE__, 0x3ff311fc, 0x7009d086, 0xbfe3851e, 0xb851eb80},			/* 1.19189=f(-0.61000)*/
{63, 0,123,__LINE__, 0x3ff2f7aa, 0x606e562e, 0xbfe33333, 0x3333332e},			/* 1.18546=f(-0.60000)*/
{64, 0,123,__LINE__, 0x3ff2ddd4, 0x9f2db1db, 0xbfe2e147, 0xae147adc},			/* 1.17915=f(-0.59000)*/
{62, 0,123,__LINE__, 0x3ff2c47a, 0x82f79fa1, 0xbfe28f5c, 0x28f5c28a},			/* 1.17296=f(-0.58000)*/
{61, 0,123,__LINE__, 0x3ff2ab9b, 0x65a62eb3, 0xbfe23d70, 0xa3d70a38},			/* 1.16689=f(-0.57000)*/
{64, 0,123,__LINE__, 0x3ff29336, 0xa439807c, 0xbfe1eb85, 0x1eb851e6},			/* 1.16094=f(-0.56000)*/
{64, 0,123,__LINE__, 0x3ff27b4b, 0x9ed39c60, 0xbfe19999, 0x99999994},			/* 1.15510=f(-0.55000)*/
{60, 0,123,__LINE__, 0x3ff263d9, 0xb8b45807, 0xbfe147ae, 0x147ae142},			/* 1.14937=f(-0.54000)*/
{64, 0,123,__LINE__, 0x3ff24ce0, 0x58355416, 0xbfe0f5c2, 0x8f5c28f0},			/* 1.14376=f(-0.53000)*/
{62, 0,123,__LINE__, 0x3ff2365e, 0xe6c60d31, 0xbfe0a3d7, 0x0a3d709e},			/* 1.13827=f(-0.52000)*/
{63, 0,123,__LINE__, 0x3ff22054, 0xd0e80140, 0xbfe051eb, 0x851eb84c},			/* 1.13289=f(-0.51000)*/
{63, 0,123,__LINE__, 0x3ff20ac1, 0x862ae8ce, 0xbfdfffff, 0xfffffff4},			/* 1.12762=f(-0.50000)*/
{63, 0,123,__LINE__, 0x3ff1f5a4, 0x7929046e, 0xbfdf5c28, 0xf5c28f50},			/* 1.12247=f(-0.49000)*/
{64, 0,123,__LINE__, 0x3ff1e0fd, 0x1f837e10, 0xbfdeb851, 0xeb851eac},			/* 1.11742=f(-0.48000)*/
{64, 0,123,__LINE__, 0x3ff1ccca, 0xf1dede2c, 0xbfde147a, 0xe147ae08},			/* 1.11249=f(-0.47000)*/
{64, 0,123,__LINE__, 0x3ff1b90d, 0x6bdf94ad, 0xbfdd70a3, 0xd70a3d64},			/* 1.10767=f(-0.46000)*/
{64, 0,123,__LINE__, 0x3ff1a5c4, 0x0c269582, 0xbfdccccc, 0xccccccc0},			/* 1.10297=f(-0.45000)*/
{64, 0,123,__LINE__, 0x3ff192ee, 0x544e08c8, 0xbfdc28f5, 0xc28f5c1c},			/* 1.09837=f(-0.44000)*/
{64, 0,123,__LINE__, 0x3ff1808b, 0xc8e60e64, 0xbfdb851e, 0xb851eb78},			/* 1.09388=f(-0.43000)*/
{64, 0,123,__LINE__, 0x3ff16e9b, 0xf1719512, 0xbfdae147, 0xae147ad4},			/* 1.08950=f(-0.42000)*/
{64, 0,123,__LINE__, 0x3ff15d1e, 0x586344c1, 0xbfda3d70, 0xa3d70a30},			/* 1.08523=f(-0.41000)*/
{64, 0,123,__LINE__, 0x3ff14c12, 0x8b1a7c2a, 0xbfd99999, 0x9999998c},			/* 1.08107=f(-0.40000)*/
{63, 0,123,__LINE__, 0x3ff13b78, 0x19e0619a, 0xbfd8f5c2, 0x8f5c28e8},			/* 1.07701=f(-0.39000)*/
{64, 0,123,__LINE__, 0x3ff12b4e, 0x97e506cd, 0xbfd851eb, 0x851eb844},			/* 1.07307=f(-0.38000)*/
{64, 0,123,__LINE__, 0x3ff11b95, 0x9b3c9fcd, 0xbfd7ae14, 0x7ae147a0},			/* 1.06923=f(-0.37000)*/
{64, 0,123,__LINE__, 0x3ff10c4c, 0xbcdcccca, 0xbfd70a3d, 0x70a3d6fc},			/* 1.06550=f(-0.36000)*/
{64, 0,123,__LINE__, 0x3ff0fd73, 0x9899f6d1, 0xbfd66666, 0x66666658},			/* 1.06187=f(-0.35000)*/
{64, 0,123,__LINE__, 0x3ff0ef09, 0xcd24bf4b, 0xbfd5c28f, 0x5c28f5b4},			/* 1.05835=f(-0.34000)*/
{64, 0,123,__LINE__, 0x3ff0e10e, 0xfc078243, 0xbfd51eb8, 0x51eb8510},			/* 1.05494=f(-0.33000)*/
{64, 0,123,__LINE__, 0x3ff0d382, 0xc9a3eb5c, 0xbfd47ae1, 0x47ae146c},			/* 1.05163=f(-0.32000)*/
{64, 0,123,__LINE__, 0x3ff0c664, 0xdd309d5c, 0xbfd3d70a, 0x3d70a3c8},			/* 1.04843=f(-0.31000)*/
{64, 0,123,__LINE__, 0x3ff0b9b4, 0xe0b6ec4a, 0xbfd33333, 0x33333324},			/* 1.04533=f(-0.30000)*/
{64, 0,123,__LINE__, 0x3ff0ad72, 0x8110aa19, 0xbfd28f5c, 0x28f5c280},			/* 1.04234=f(-0.29000)*/
{64, 0,123,__LINE__, 0x3ff0a19d, 0x6de605ab, 0xbfd1eb85, 0x1eb851dc},			/* 1.03945=f(-0.28000)*/
{64, 0,123,__LINE__, 0x3ff09635, 0x59ab7c50, 0xbfd147ae, 0x147ae138},			/* 1.03667=f(-0.27000)*/
{64, 0,123,__LINE__, 0x3ff08b39, 0xf99fdd92, 0xbfd0a3d7, 0x0a3d7094},			/* 1.03399=f(-0.26000)*/
{64, 0,123,__LINE__, 0x3ff080ab, 0x05ca6145, 0xbfcfffff, 0xffffffe0},			/* 1.03141=f(-0.25000)*/
{64, 0,123,__LINE__, 0x3ff07688, 0x38f8cfde, 0xbfceb851, 0xeb851e98},			/* 1.02893=f(-0.24000)*/
{64, 0,123,__LINE__, 0x3ff06cd1, 0x50bdbcf5, 0xbfcd70a3, 0xd70a3d50},			/* 1.02656=f(-0.23000)*/
{64, 0,123,__LINE__, 0x3ff06386, 0x0d6ed3ec, 0xbfcc28f5, 0xc28f5c08},			/* 1.02429=f(-0.22000)*/
{64, 0,123,__LINE__, 0x3ff05aa6, 0x322336b4, 0xbfcae147, 0xae147ac0},			/* 1.02213=f(-0.21000)*/
{64, 0,123,__LINE__, 0x3ff05231, 0x84b1ee9c, 0xbfc99999, 0x99999978},			/* 1.02006=f(-0.20000)*/
{64, 0,123,__LINE__, 0x3ff04a27, 0xcdb06f29, 0xbfc851eb, 0x851eb830},			/* 1.01810=f(-0.19000)*/
{64, 0,123,__LINE__, 0x3ff04288, 0xd8712ae7, 0xbfc70a3d, 0x70a3d6e8},			/* 1.01624=f(-0.18000)*/
{64, 0,123,__LINE__, 0x3ff03b54, 0x73023a32, 0xbfc5c28f, 0x5c28f5a0},			/* 1.01448=f(-0.17000)*/
{64, 0,123,__LINE__, 0x3ff0348a, 0x6e2c13de, 0xbfc47ae1, 0x47ae1458},			/* 1.01282=f(-0.16000)*/
{64, 0,123,__LINE__, 0x3ff02e2a, 0x9d7057c8, 0xbfc33333, 0x33333310},			/* 1.01127=f(-0.15000)*/
{64, 0,123,__LINE__, 0x3ff02834, 0xd708ab3d, 0xbfc1eb85, 0x1eb851c8},			/* 1.00981=f(-0.14000)*/
{64, 0,123,__LINE__, 0x3ff022a8, 0xf3e5a732, 0xbfc0a3d7, 0x0a3d7080},			/* 1.00846=f(-0.13000)*/
{64, 0,123,__LINE__, 0x3ff01d86, 0xcfadd84c, 0xbfbeb851, 0xeb851e71},			/* 1.00720=f(-0.12000)*/
{64, 0,123,__LINE__, 0x3ff018ce, 0x48bcd09e, 0xbfbc28f5, 0xc28f5be2},			/* 1.00605=f(-0.11000)*/
{64, 0,123,__LINE__, 0x3ff0147f, 0x40224b38, 0xbfb99999, 0x99999953},			/* 1.00500=f(-0.00100)*/
{64, 0,123,__LINE__, 0x3ff01099, 0x99a16160, 0xbfb70a3d, 0x70a3d6c4},			/* 1.00405=f(-0.09000)*/
{64, 0,123,__LINE__, 0x3ff00d1d, 0x3bafd17f, 0xbfb47ae1, 0x47ae1435},			/* 1.00320=f(-0.08000)*/
{60, 0,123,__LINE__, 0x3ff00a0a, 0x0f7557c8, 0xbfb1eb85, 0x1eb851a6},			/* 1.00245=f(-0.07000)*/
{64, 0,123,__LINE__, 0x3ff00760, 0x00cb1875, 0xbfaeb851, 0xeb851e2d},			/* 1.00180=f(-0.06000)*/
{64, 0,123,__LINE__, 0x3ff0051e, 0xfe3b1bc2, 0xbfa99999, 0x9999990e},			/* 1.00125=f(-0.05000)*/
{64, 0,123,__LINE__, 0x3ff00346, 0xf8ffdb76, 0xbfa47ae1, 0x47ae13ef},			/* 1.00080=f(-0.04000)*/
{64, 0,123,__LINE__, 0x3ff001d7, 0xe503e214, 0xbf9eb851, 0xeb851da0},			/* 1.00045=f(-0.03000)*/
{64, 0,123,__LINE__, 0x3ff000d1, 0xb8e17bb0, 0xbf947ae1, 0x47ae1362},			/* 1.00020=f(-0.02000)*/
{64, 0,123,__LINE__, 0x3ff00034, 0x6de27852, 0xbf847ae1, 0x47ae1249},			/* 1.00005=f(-0.00010)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3cd19000, 0x00000000},			/* 1.00000=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0x3ff00034, 0x6de27853, 0x3f847ae1, 0x47ae16ad},			/* 1.00005=f(0.01000)*/
{64, 0,123,__LINE__, 0x3ff000d1, 0xb8e17bb0, 0x3f947ae1, 0x47ae1594},			/* 1.00020=f(0.02000)*/
{64, 0,123,__LINE__, 0x3ff001d7, 0xe503e214, 0x3f9eb851, 0xeb851fd2},			/* 1.00045=f(0.03000)*/
{64, 0,123,__LINE__, 0x3ff00346, 0xf8ffdb76, 0x3fa47ae1, 0x47ae1508},			/* 1.00080=f(0.04000)*/
{64, 0,123,__LINE__, 0x3ff0051e, 0xfe3b1bc3, 0x3fa99999, 0x99999a27},			/* 1.00125=f(0.05000)*/
{64, 0,123,__LINE__, 0x3ff00760, 0x00cb1876, 0x3faeb851, 0xeb851f46},			/* 1.00180=f(0.06000)*/
{64, 0,123,__LINE__, 0x3ff00a0a, 0x0f7557c8, 0x3fb1eb85, 0x1eb85232},			/* 1.00245=f(0.07000)*/
{64, 0,123,__LINE__, 0x3ff00d1d, 0x3bafd180, 0x3fb47ae1, 0x47ae14c1},			/* 1.00320=f(0.08000)*/
{64, 0,123,__LINE__, 0x3ff01099, 0x99a16160, 0x3fb70a3d, 0x70a3d750},			/* 1.00405=f(0.09000)*/
{64, 0,123,__LINE__, 0x3ff0147f, 0x40224b39, 0x3fb99999, 0x999999df},			/* 1.00500=f(0.10000)*/
{64, 0,123,__LINE__, 0x3ff018ce, 0x48bcd09f, 0x3fbc28f5, 0xc28f5c6e},			/* 1.00605=f(0.11000)*/
{64, 0,123,__LINE__, 0x3ff01d86, 0xcfadd84c, 0x3fbeb851, 0xeb851efd},			/* 1.00720=f(0.12000)*/
{64, 0,123,__LINE__, 0x3ff022a8, 0xf3e5a734, 0x3fc0a3d7, 0x0a3d70c6},			/* 1.00846=f(0.13000)*/
{64, 0,123,__LINE__, 0x3ff02834, 0xd708ab3e, 0x3fc1eb85, 0x1eb8520e},			/* 1.00981=f(0.14000)*/
{64, 0,123,__LINE__, 0x3ff02e2a, 0x9d7057ca, 0x3fc33333, 0x33333356},			/* 1.01127=f(0.15000)*/
{64, 0,123,__LINE__, 0x3ff0348a, 0x6e2c13e0, 0x3fc47ae1, 0x47ae149e},			/* 1.01282=f(0.16000)*/
{64, 0,123,__LINE__, 0x3ff03b54, 0x73023a34, 0x3fc5c28f, 0x5c28f5e6},			/* 1.01448=f(0.17000)*/
{64, 0,123,__LINE__, 0x3ff04288, 0xd8712ae9, 0x3fc70a3d, 0x70a3d72e},			/* 1.01624=f(0.18000)*/
{64, 0,123,__LINE__, 0x3ff04a27, 0xcdb06f2a, 0x3fc851eb, 0x851eb876},			/* 1.01810=f(0.19000)*/
{64, 0,123,__LINE__, 0x3ff05231, 0x84b1ee9e, 0x3fc99999, 0x999999be},			/* 1.02006=f(0.20000)*/
{64, 0,123,__LINE__, 0x3ff05aa6, 0x322336b6, 0x3fcae147, 0xae147b06},			/* 1.02213=f(0.21000)*/
{64, 0,123,__LINE__, 0x3ff06386, 0x0d6ed3ee, 0x3fcc28f5, 0xc28f5c4e},			/* 1.02429=f(0.22000)*/
{64, 0,123,__LINE__, 0x3ff06cd1, 0x50bdbcf7, 0x3fcd70a3, 0xd70a3d96},			/* 1.02656=f(0.23000)*/
{64, 0,123,__LINE__, 0x3ff07688, 0x38f8cfe0, 0x3fceb851, 0xeb851ede},			/* 1.02893=f(0.24000)*/
{64, 0,123,__LINE__, 0x3ff080ab, 0x05ca6147, 0x3fd00000, 0x00000013},			/* 1.03141=f(0.25000)*/
{64, 0,123,__LINE__, 0x3ff08b39, 0xf99fdd94, 0x3fd0a3d7, 0x0a3d70b7},			/* 1.03399=f(0.26000)*/
{63, 0,123,__LINE__, 0x3ff09635, 0x59ab7c53, 0x3fd147ae, 0x147ae15b},			/* 1.03667=f(0.27000)*/
{64, 0,123,__LINE__, 0x3ff0a19d, 0x6de605ad, 0x3fd1eb85, 0x1eb851ff},			/* 1.03945=f(0.28000)*/
{64, 0,123,__LINE__, 0x3ff0ad72, 0x8110aa1c, 0x3fd28f5c, 0x28f5c2a3},			/* 1.04234=f(0.29000)*/
{62, 0,123,__LINE__, 0x3ff0b9b4, 0xe0b6ec4e, 0x3fd33333, 0x33333347},			/* 1.04533=f(0.30000)*/
{64, 0,123,__LINE__, 0x3ff0c664, 0xdd309d5e, 0x3fd3d70a, 0x3d70a3eb},			/* 1.04843=f(0.31000)*/
{64, 0,123,__LINE__, 0x3ff0d382, 0xc9a3eb60, 0x3fd47ae1, 0x47ae148f},			/* 1.05163=f(0.32000)*/
{63, 0,123,__LINE__, 0x3ff0e10e, 0xfc078246, 0x3fd51eb8, 0x51eb8533},			/* 1.05494=f(0.33000)*/
{64, 0,123,__LINE__, 0x3ff0ef09, 0xcd24bf4e, 0x3fd5c28f, 0x5c28f5d7},			/* 1.05835=f(0.34000)*/
{64, 0,123,__LINE__, 0x3ff0fd73, 0x9899f6d4, 0x3fd66666, 0x6666667b},			/* 1.06187=f(0.35000)*/
{64, 0,123,__LINE__, 0x3ff10c4c, 0xbcdcccce, 0x3fd70a3d, 0x70a3d71f},			/* 1.06550=f(0.36000)*/
{64, 0,123,__LINE__, 0x3ff11b95, 0x9b3c9fd0, 0x3fd7ae14, 0x7ae147c3},			/* 1.06923=f(0.37000)*/
{64, 0,123,__LINE__, 0x3ff12b4e, 0x97e506d0, 0x3fd851eb, 0x851eb867},			/* 1.07307=f(0.38000)*/
{64, 0,123,__LINE__, 0x3ff13b78, 0x19e0619e, 0x3fd8f5c2, 0x8f5c290b},			/* 1.07701=f(0.39000)*/
{62, 0,123,__LINE__, 0x3ff14c12, 0x8b1a7c2d, 0x3fd99999, 0x999999af},			/* 1.08107=f(0.40000)*/
{64, 0,123,__LINE__, 0x3ff15d1e, 0x586344c4, 0x3fda3d70, 0xa3d70a53},			/* 1.08523=f(0.41000)*/
{64, 0,123,__LINE__, 0x3ff16e9b, 0xf1719516, 0x3fdae147, 0xae147af7},			/* 1.08950=f(0.42000)*/
{64, 0,123,__LINE__, 0x3ff1808b, 0xc8e60e68, 0x3fdb851e, 0xb851eb9b},			/* 1.09388=f(0.43000)*/
{64, 0,123,__LINE__, 0x3ff192ee, 0x544e08cc, 0x3fdc28f5, 0xc28f5c3f},			/* 1.09837=f(0.44000)*/
{64, 0,123,__LINE__, 0x3ff1a5c4, 0x0c269587, 0x3fdccccc, 0xcccccce3},			/* 1.10297=f(0.45000)*/
{64, 0,123,__LINE__, 0x3ff1b90d, 0x6bdf94b1, 0x3fdd70a3, 0xd70a3d87},			/* 1.10767=f(0.46000)*/
{64, 0,123,__LINE__, 0x3ff1ccca, 0xf1dede30, 0x3fde147a, 0xe147ae2b},			/* 1.11249=f(0.47000)*/
{64, 0,123,__LINE__, 0x3ff1e0fd, 0x1f837e14, 0x3fdeb851, 0xeb851ecf},			/* 1.11742=f(0.48000)*/
{63, 0,123,__LINE__, 0x3ff1f5a4, 0x79290472, 0x3fdf5c28, 0xf5c28f73},			/* 1.12247=f(0.49000)*/
{61, 0,123,__LINE__, 0x3ff20ac1, 0x862ae8d3, 0x3fe00000, 0x0000000b},			/* 1.12762=f(0.50000)*/
{64, 0,123,__LINE__, 0x3ff22054, 0xd0e80146, 0x3fe051eb, 0x851eb85d},			/* 1.13289=f(0.51000)*/
{64, 0,123,__LINE__, 0x3ff2365e, 0xe6c60d36, 0x3fe0a3d7, 0x0a3d70af},			/* 1.13827=f(0.52000)*/
{63, 0,123,__LINE__, 0x3ff24ce0, 0x5835541a, 0x3fe0f5c2, 0x8f5c2901},			/* 1.14376=f(0.53000)*/
{64, 0,123,__LINE__, 0x3ff263d9, 0xb8b4580c, 0x3fe147ae, 0x147ae153},			/* 1.14937=f(0.54000)*/
{64, 0,123,__LINE__, 0x3ff27b4b, 0x9ed39c65, 0x3fe19999, 0x999999a5},			/* 1.15510=f(0.55000)*/
{62, 0,123,__LINE__, 0x3ff29336, 0xa4398081, 0x3fe1eb85, 0x1eb851f7},			/* 1.16094=f(0.56000)*/
{64, 0,123,__LINE__, 0x3ff2ab9b, 0x65a62eb8, 0x3fe23d70, 0xa3d70a49},			/* 1.16689=f(0.57000)*/
{63, 0,123,__LINE__, 0x3ff2c47a, 0x82f79fa6, 0x3fe28f5c, 0x28f5c29b},			/* 1.17296=f(0.58000)*/
{64, 0,123,__LINE__, 0x3ff2ddd4, 0x9f2db1e0, 0x3fe2e147, 0xae147aed},			/* 1.17915=f(0.59000)*/
{63, 0,123,__LINE__, 0x3ff2f7aa, 0x606e5634, 0x3fe33333, 0x3333333f},			/* 1.18546=f(0.60000)*/
{63, 0,123,__LINE__, 0x3ff311fc, 0x7009d08c, 0x3fe3851e, 0xb851eb91},			/* 1.19189=f(0.61000)*/
{64, 0,123,__LINE__, 0x3ff32ccb, 0x7a7f0d88, 0x3fe3d70a, 0x3d70a3e3},			/* 1.19843=f(0.62000)*/
{64, 0,123,__LINE__, 0x3ff34818, 0x2f800cfc, 0x3fe428f5, 0xc28f5c35},			/* 1.20510=f(0.63000)*/
{63, 0,123,__LINE__, 0x3ff363e3, 0x41f66164, 0x3fe47ae1, 0x47ae1487},			/* 1.21188=f(0.64000)*/
{63, 0,123,__LINE__, 0x3ff3802d, 0x6807c468, 0x3fe4cccc, 0xccccccd9},			/* 1.21879=f(0.65000)*/
{62, 0,123,__LINE__, 0x3ff39cf7, 0x5b1ac095, 0x3fe51eb8, 0x51eb852b},			/* 1.22582=f(0.66000)*/
{61, 0,123,__LINE__, 0x3ff3ba41, 0xd7db7073, 0x3fe570a3, 0xd70a3d7d},			/* 1.23297=f(0.67000)*/
{64, 0,123,__LINE__, 0x3ff3d80d, 0x9e4052fa, 0x3fe5c28f, 0x5c28f5cf},			/* 1.24024=f(0.68000)*/
{62, 0,123,__LINE__, 0x3ff3f65b, 0x718f35a5, 0x3fe6147a, 0xe147ae21},			/* 1.24764=f(0.69000)*/
{64, 0,123,__LINE__, 0x3ff4152c, 0x18623434, 0x3fe66666, 0x66666673},			/* 1.25516=f(0.70000)*/
{64, 0,123,__LINE__, 0x3ff43480, 0x5cacce37, 0x3fe6b851, 0xeb851ec5},			/* 1.26281=f(0.71000)*/
{64, 0,123,__LINE__, 0x3ff45459, 0x0bc1129c, 0x3fe70a3d, 0x70a3d717},			/* 1.27059=f(0.72000)*/
{64, 0,123,__LINE__, 0x3ff474b6, 0xf654e13d, 0x3fe75c28, 0xf5c28f69},			/* 1.27849=f(0.73000)*/
{62, 0,123,__LINE__, 0x3ff4959a, 0xf08742be, 0x3fe7ae14, 0x7ae147bb},			/* 1.28652=f(0.74000)*/
{63, 0,123,__LINE__, 0x3ff4b705, 0xd1e5d6ad, 0x3fe80000, 0x0000000d},			/* 1.29468=f(0.75000)*/
{63, 0,123,__LINE__, 0x3ff4d8f8, 0x75725831, 0x3fe851eb, 0x851eb85f},			/* 1.30297=f(0.76000)*/
{63, 0,123,__LINE__, 0x3ff4fb73, 0xb9a83955, 0x3fe8a3d7, 0x0a3d70b1},			/* 1.31139=f(0.77000)*/
{64, 0,123,__LINE__, 0x3ff51e78, 0x8082551c, 0x3fe8f5c2, 0x8f5c2903},			/* 1.31993=f(0.78000)*/
{64, 0,123,__LINE__, 0x3ff54207, 0xaf80b877, 0x3fe947ae, 0x147ae155},			/* 1.32862=f(0.79000)*/
{64, 0,123,__LINE__, 0x3ff56622, 0x2fae825f, 0x3fe99999, 0x999999a7},			/* 1.33743=f(0.80000)*/
{64, 0,123,__LINE__, 0x3ff58ac8, 0xeda7db20, 0x3fe9eb85, 0x1eb851f9},			/* 1.34638=f(0.81000)*/
{64, 0,123,__LINE__, 0x3ff5affc, 0xd9a002f6, 0x3fea3d70, 0xa3d70a4b},			/* 1.35546=f(0.82000)*/
{60, 0,123,__LINE__, 0x3ff5d5be, 0xe7677848, 0x3fea8f5c, 0x28f5c29d},			/* 1.36468=f(0.83000)*/
{61, 0,123,__LINE__, 0x3ff5fc10, 0x0e723584, 0x3feae147, 0xae147aef},			/* 1.37403=f(0.84000)*/
{63, 0,123,__LINE__, 0x3ff622f1, 0x49de06d9, 0x3feb3333, 0x33333341},			/* 1.38353=f(0.85000)*/
{62, 0,123,__LINE__, 0x3ff64a63, 0x9878f7f2, 0x3feb851e, 0xb851eb93},			/* 1.39316=f(0.86000)*/
{63, 0,123,__LINE__, 0x3ff67267, 0xfcc7d9d8, 0x3febd70a, 0x3d70a3e5},			/* 1.40293=f(0.87000)*/
{63, 0,123,__LINE__, 0x3ff69aff, 0x7d0ce13c, 0x3fec28f5, 0xc28f5c37},			/* 1.41284=f(0.88000)*/
{63, 0,123,__LINE__, 0x3ff6c42b, 0x234e5d2c, 0x3fec7ae1, 0x47ae1489},			/* 1.42289=f(0.89000)*/
{60, 0,123,__LINE__, 0x3ff6edeb, 0xfd5d8687, 0x3feccccc, 0xccccccdb},			/* 1.43308=f(0.90000)*/
{61, 0,123,__LINE__, 0x3ff71843, 0x1cdd6844, 0x3fed1eb8, 0x51eb852d},			/* 1.44342=f(0.91000)*/
{62, 0,123,__LINE__, 0x3ff74331, 0x9749e0ce, 0x3fed70a3, 0xd70a3d7f},			/* 1.45390=f(0.92000)*/
{63, 0,123,__LINE__, 0x3ff76eb8, 0x85febc7f, 0x3fedc28f, 0x5c28f5d1},			/* 1.46453=f(0.93000)*/
{61, 0,123,__LINE__, 0x3ff79ad9, 0x063ee994, 0x3fee147a, 0xe147ae23},			/* 1.47530=f(0.94000)*/
{63, 0,123,__LINE__, 0x3ff7c794, 0x393bc5af, 0x3fee6666, 0x66666675},			/* 1.48622=f(0.95000)*/
{58, 0,123,__LINE__, 0x3ff7f4eb, 0x441c8520, 0x3feeb851, 0xeb851ec7},			/* 1.49729=f(0.96000)*/
{63, 0,123,__LINE__, 0x3ff822df, 0x5005b40f, 0x3fef0a3d, 0x70a3d719},			/* 1.50851=f(0.97000)*/
{62, 0,123,__LINE__, 0x3ff85171, 0x8a20d1f2, 0x3fef5c28, 0xf5c28f6b},			/* 1.51988=f(0.98000)*/
{62, 0,123,__LINE__, 0x3ff880a3, 0x23a4072a, 0x3fefae14, 0x7ae147bd},			/* 1.53140=f(0.99000)*/
{63, 0,123,__LINE__, 0x3ff8b075, 0x51d9f558, 0x3ff00000, 0x00000007},			/* 1.54308=f(1.00000)*/
{61, 0,123,__LINE__, 0x3ff8e0e9, 0x4e29a253, 0x3ff028f5, 0xc28f5c30},			/* 1.55491=f(1.01000)*/
{64, 0,123,__LINE__, 0x3ff91200, 0x561e7e16, 0x3ff051eb, 0x851eb859},			/* 1.56689=f(1.02000)*/
{64, 0,123,__LINE__, 0x3ff943bb, 0xab7083ca, 0x3ff07ae1, 0x47ae1482},			/* 1.57903=f(1.03000)*/
{59, 0,123,__LINE__, 0x3ff9761c, 0x940c7650, 0x3ff0a3d7, 0x0a3d70ab},			/* 1.59133=f(1.04000)*/
{64, 0,123,__LINE__, 0x3ff9a924, 0x5a1c3820, 0x3ff0cccc, 0xccccccd4},			/* 1.60379=f(1.05000)*/
{62, 0,123,__LINE__, 0x3ff9dcd4, 0x4c0f3f2a, 0x3ff0f5c2, 0x8f5c28fd},			/* 1.61641=f(1.06000)*/
{64, 0,123,__LINE__, 0x3ffa112d, 0xbca3248b, 0x3ff11eb8, 0x51eb8526},			/* 1.62919=f(1.07000)*/
{63, 0,123,__LINE__, 0x3ffa4632, 0x02ec5097, 0x3ff147ae, 0x147ae14f},			/* 1.64213=f(1.08000)*/
{62, 0,123,__LINE__, 0x3ffa7be2, 0x7a5ec339, 0x3ff170a3, 0xd70a3d78},			/* 1.65524=f(1.09000)*/
{63, 0,123,__LINE__, 0x3ffab240, 0x82d6f91c, 0x3ff19999, 0x999999a1},			/* 1.66851=f(1.10000)*/
{64, 0,123,__LINE__, 0x3ffae94d, 0x80a2ed8b, 0x3ff1c28f, 0x5c28f5ca},			/* 1.68195=f(1.11000)*/
{60, 0,123,__LINE__, 0x3ffb210a, 0xdc8b39a7, 0x3ff1eb85, 0x1eb851f3},			/* 1.69556=f(1.12000)*/
{64, 0,123,__LINE__, 0x3ffb597a, 0x03dc50c2, 0x3ff2147a, 0xe147ae1c},			/* 1.70934=f(1.13000)*/
{63, 0,123,__LINE__, 0x3ffb929c, 0x686fda7b, 0x3ff23d70, 0xa3d70a45},			/* 1.72329=f(1.14000)*/
{64, 0,123,__LINE__, 0x3ffbcc73, 0x80b62a8f, 0x3ff26666, 0x6666666e},			/* 1.73741=f(1.15000)*/
{64, 0,123,__LINE__, 0x3ffc0700, 0xc7bfd6d5, 0x3ff28f5c, 0x28f5c297},			/* 1.75171=f(1.16000)*/
{62, 0,123,__LINE__, 0x3ffc4245, 0xbd476b80, 0x3ff2b851, 0xeb851ec0},			/* 1.76618=f(1.17000)*/
{63, 0,123,__LINE__, 0x3ffc7e43, 0xe5bb3de2, 0x3ff2e147, 0xae147ae9},			/* 1.78082=f(1.18000)*/
{61, 0,123,__LINE__, 0x3ffcbafc, 0xca475e2b, 0x3ff30a3d, 0x70a3d712},			/* 1.79565=f(1.19000)*/
{60, 0,123,__LINE__, 0x4070bbf2, 0xbc2b69c8, 0xc01921fb, 0x54442d18},			/* 267.746=f(-6.28318)*/
{62, 0,123,__LINE__, 0x404bd4e9, 0xaa3e9cdd, 0xc012d97c, 0x7f3321d2},			/* 55.6633=f(-4.71238)*/
{63, 0,123,__LINE__, 0x40272f14, 0x7fee3fff, 0xc00921fb, 0x54442d18},			/* 11.5919=f(-3.14159)*/
{58, 0,123,__LINE__, 0x400412cc, 0x2a8d4e9f, 0xbff921fb, 0x54442d18},			/* 2.50917=f(-1.57079)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x00000000, 0x00000000},			/* 1.00000=f(0.00000)*/
{58, 0,123,__LINE__, 0x400412cc, 0x2a8d4e9f, 0x3ff921fb, 0x54442d18},			/* 2.50917=f(1.57079)*/
{63, 0,123,__LINE__, 0x40272f14, 0x7fee3fff, 0x400921fb, 0x54442d18},			/* 11.5919=f(3.14159)*/
{62, 0,123,__LINE__, 0x404bd4e9, 0xaa3e9cdd, 0x4012d97c, 0x7f3321d2},			/* 55.6633=f(4.71238)*/
{63, 0,123,__LINE__, 0x42937047, 0x0aec28e4, 0xc03e0000, 0x00000000},			/* 5.34324e+12=f(-30.0000)*/
{63, 0,123,__LINE__, 0x426c68ab, 0xda31cdb8, 0xc03c4ccc, 0xcccccccd},			/* 9.76121e+11=f(-28.3000)*/
{60, 0,123,__LINE__, 0x4244c263, 0x8e2b5848, 0xc03a9999, 0x9999999a},			/* 1.78321e+11=f(-26.6000)*/
{63, 0,123,__LINE__, 0x421e56cf, 0x7144c252, 0xc038e666, 0x66666667},			/* 3.25764e+10=f(-24.9000)*/
{60, 0,123,__LINE__, 0x41f62b79, 0x1e77d137, 0xc0373333, 0x33333334},			/* 5.95116e+09=f(-23.2000)*/
{64, 0,123,__LINE__, 0x41d03343, 0x003272a8, 0xc0358000, 0x00000001},			/* 1.08718e+09=f(-21.5000)*/
{62, 0,123,__LINE__, 0x41a7ad17, 0x51ce1a0d, 0xc033cccc, 0xccccccce},			/* 1.98610e+08=f(-19.8000)*/
{61, 0,123,__LINE__, 0x41814d0b, 0xc17d4224, 0xc0321999, 0x9999999b},			/* 3.62827e+07=f(-18.1000)*/
{64, 0,123,__LINE__, 0x415948e8, 0xe47eadbc, 0xc0306666, 0x66666668},			/* 6.62826e+06=f(-16.4000)*/
{63, 0,123,__LINE__, 0x413279f9, 0xd10e6ddb, 0xc02d6666, 0x6666666a},			/* 1.21087e+06=f(-14.7000)*/
{63, 0,123,__LINE__, 0x410b00b5, 0x916b6132, 0xc02a0000, 0x00000004},			/* 221206=f(-13.0000)*/
{63, 0,123,__LINE__, 0x40e3bb5a, 0x336a724a, 0xc0269999, 0x9999999e},			/* 40410=f(-11.3000)*/
{63, 0,123,__LINE__, 0x40bcd664, 0x0c8f67aa, 0xc0233333, 0x33333338},			/* 7382.39=f(-9.60000)*/
{62, 0,123,__LINE__, 0x40951290, 0xbdecc6ea, 0xc01f9999, 0x999999a3},			/* 1348.64=f(-7.90000)*/
{62, 0,123,__LINE__, 0x406ecc04, 0x62869201, 0xc018cccc, 0xccccccd6},			/* 246.375=f(-6.20000)*/
{62, 0,123,__LINE__, 0x404681ce, 0xb0641389, 0xc0120000, 0x00000009},			/* 45.0141=f(-4.50000)*/
{64, 0,123,__LINE__, 0x40208165, 0x9e7a609e, 0xc0066666, 0x66666678},			/* 8.25272=f(-2.80000)*/
{62, 0,123,__LINE__, 0x3ffab240, 0x82d6f941, 0xbff19999, 0x999999bd},			/* 1.66851=f(-1.10000)*/
{64, 0,123,__LINE__, 0x3ff2f7aa, 0x606e561a, 0x3fe33333, 0x333332ec},			/* 1.18546=f(0.60000)*/
{62, 0,123,__LINE__, 0x4014261d, 0x2b7d6152, 0x40026666, 0x66666654},			/* 5.03722=f(2.30000)*/
{61, 0,123,__LINE__, 0x403b4ee8, 0x58de3e43, 0x400fffff, 0xffffffee},			/* 27.3082=f(4.00000)*/
{63, 0,123,__LINE__, 0x4062adee, 0x9455e3ef, 0x4016cccc, 0xccccccc4},			/* 149.435=f(5.70000)*/
{64, 0,123,__LINE__, 0x40898ff0, 0xaea73114, 0x401d9999, 0x99999991},			/* 817.992=f(7.40000)*/
{64, 0,123,__LINE__, 0x40b17da5, 0x7af77ec3, 0x40223333, 0x3333332f},			/* 4477.64=f(9.10000)*/
{63, 0,123,__LINE__, 0x40d7ef99, 0xa3138b94, 0x40259999, 0x99999995},			/* 24510=f(10.8000)*/
{64, 0,123,__LINE__, 0x410060c5, 0x2566b454, 0x4028ffff, 0xfffffffb},			/* 134168=f(12.5000)*/
{62, 0,123,__LINE__, 0x412669c0, 0x308d36dd, 0x402c6666, 0x66666661},			/* 734432=f(14.2000)*/
{62, 0,123,__LINE__, 0x414eac09, 0x532f3e8a, 0x402fcccc, 0xccccccc7},			/* 4.02024e+06=f(15.9000)*/
{62, 0,123,__LINE__, 0x4174fcb4, 0x4c4756da, 0x40319999, 0x99999997},			/* 2.20066e+07=f(17.6000)*/
{63, 0,123,__LINE__, 0x419cb879, 0xa3e73668, 0x40334ccc, 0xccccccca},			/* 1.20463e+08=f(19.3000)*/
{57, 0,123,__LINE__, 0x41c3a6e1, 0xfd9eecbf, 0x4034ffff, 0xfffffffd},			/* 6.59408e+08=f(21.0000)*/
{60, 0,123,__LINE__, 0x41eae4b2, 0x68df16f6, 0x4036b333, 0x33333330},			/* 3.60956e+09=f(22.7000)*/
{63, 0,123,__LINE__, 0x421266ce, 0xffa84595, 0x40386666, 0x66666663},			/* 1.97586e+10=f(24.4000)*/
{64, 0,123,__LINE__, 0x42392ead, 0xfa09870a, 0x403a1999, 0x99999996},			/* 1.08157e+11=f(26.1000)*/
{63, 0,123,__LINE__, 0x42613b19, 0x1e69fb25, 0x403bcccc, 0xccccccc9},			/* 5.92048e+11=f(27.8000)*/
{61, 0,123,__LINE__, 0x42879487, 0x9e85b8dc, 0x403d7fff, 0xfffffffc},			/* 3.24084e+12=f(29.5000)*/
0,};
test_cosh(m)   {run_vector_1(m,cosh_vec,(char *)(cosh),"cosh","dd");   }	
