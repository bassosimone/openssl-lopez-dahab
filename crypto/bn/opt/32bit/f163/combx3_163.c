#include <stdint.h>
void combx3_163_32(uint32_t Out0[6], const uint32_t In0[3], const uint32_t In1[3])
{
	uint32_t Var0[8][6];
	uint32_t Var1[6];
	uint32_t Var2[6];
	uint32_t Var3[6];
	uint32_t Var4[6];
	uint32_t Var5[6];
	uint32_t Var6[6];
	uint32_t Var7[6];
	unsigned int Var8;
	uint32_t Var9[3];
	uint32_t Var10[6];
	unsigned int Var11;
	uint32_t Var12[3];
	uint32_t Var13[6];
	uint32_t Var14[6];
	uint32_t Var15[6];
	unsigned int Var16;
	uint32_t Var17[3];
	uint32_t Var18[6];
	unsigned int Var19;
	uint32_t Var20[3];
	uint32_t Var21[6];
	uint32_t Var22[6];
	uint32_t Var23[6];
	unsigned int Var24;
	uint32_t Var25[3];
	uint32_t Var26[6];
	unsigned int Var27;
	uint32_t Var28[3];
	uint32_t Var29[6];
	uint32_t Var30[6];
	uint32_t Var31[6];
	unsigned int Var32;
	uint32_t Var33[3];
	uint32_t Var34[6];
	unsigned int Var35;
	uint32_t Var36[3];
	uint32_t Var37[6];
	uint32_t Var38[6];
	uint32_t Var39[6];
	unsigned int Var40;
	uint32_t Var41[3];
	uint32_t Var42[6];
	unsigned int Var43;
	uint32_t Var44[3];
	uint32_t Var45[6];
	uint32_t Var46[6];
	uint32_t Var47[6];
	unsigned int Var48;
	uint32_t Var49[3];
	uint32_t Var50[6];
	unsigned int Var51;
	uint32_t Var52[3];
	uint32_t Var53[6];
	uint32_t Var54[6];
	unsigned int Var55;
	uint32_t Var56[3];
	uint32_t Var57[6];
	uint32_t Var58[6];
	uint32_t Var59[6];
	unsigned int Var60;
	uint32_t Var61[3];
	uint32_t Var62[6];
	unsigned int Var63;
	uint32_t Var64[3];
	uint32_t Var65[6];
	uint32_t Var66[6];
	unsigned int Var67;
	uint32_t Var68[3];
	uint32_t Var69[6];
	uint32_t Var70[6];
	uint32_t Var71[6];
	unsigned int Var72;
	uint32_t Var73[3];
	uint32_t Var74[6];
	unsigned int Var75;
	uint32_t Var76[3];
	uint32_t Var77[6];
	uint32_t Var78[6];
	unsigned int Var79;
	uint32_t Var80[3];
	uint32_t Var81[6];
	uint32_t Var82[6];
	uint32_t Var83[6];
	unsigned int Var84;
	uint32_t Var85[3];
	uint32_t Var86[6];
	unsigned int Var87;
	uint32_t Var88[3];
	uint32_t Var89[6];
	uint32_t Var90[6];
	unsigned int Var91;
	uint32_t Var92[3];
	uint32_t Var93[6];
	uint32_t Var94[6];
	uint32_t Var95[6];
	unsigned int Var96;
	uint32_t Var97[3];
	uint32_t Var98[6];
	unsigned int Var99;
	uint32_t Var100[3];
	uint32_t Var101[6];
	uint32_t Var102[6];
	unsigned int Var103;
	uint32_t Var104[3];
	uint32_t Var105[6];
	uint32_t Var106[6];
	uint32_t Var107[6];
	unsigned int Var108;
	uint32_t Var109[6];
	unsigned int Var110;
	uint32_t Var111[3];
	uint32_t Var112[6];
	uint32_t Var113[6];
	unsigned int Var114;
	uint32_t Var115[3];
	uint32_t Var116[6];
	uint32_t Var117[6];

	Var0[1][0] = 0u;
	Var0[1][1] = 0u;
	Var0[1][2] = 0u;
	Var0[1][3] = 0u;
	Var0[1][4] = 0u;
	Var0[1][5] = 0u;
	Var0[0][0] = Var0[1][0];
	Var0[0][1] = Var0[1][1];
	Var0[0][2] = Var0[1][2];
	Var0[0][3] = Var0[1][3];
	Var0[0][4] = Var0[1][4];
	Var0[0][5] = Var0[1][5];
	Var0[1][0] = In0[0];
	Var0[1][1] = In0[1];
	Var0[1][2] = (In0[2] & 0x3ffffu) ^ (Var0[1][2] & 0xfffc0000u);
	Var1[5] = (Var0[1][5] << 1u) ^ (Var0[1][4] >> 31u);
	Var1[4] = (Var0[1][4] << 1u) ^ (Var0[1][3] >> 31u);
	Var1[3] = (Var0[1][3] << 1u) ^ (Var0[1][2] >> 31u);
	Var1[2] = (Var0[1][2] << 1u) ^ (Var0[1][1] >> 31u);
	Var1[1] = (Var0[1][1] << 1u) ^ (Var0[1][0] >> 31u);
	Var1[0] = Var0[1][0] << 1u;
	Var0[2][0] = Var1[0];
	Var0[2][1] = Var1[1];
	Var0[2][2] = Var1[2];
	Var0[2][3] = Var1[3];
	Var0[2][4] = Var1[4];
	Var0[2][5] = Var1[5];
	Var2[0] = Var0[2][0] ^ Var0[1][0];
	Var2[1] = Var0[2][1] ^ Var0[1][1];
	Var2[2] = Var0[2][2] ^ Var0[1][2];
	Var2[3] = Var0[2][3] ^ Var0[1][3];
	Var2[4] = Var0[2][4] ^ Var0[1][4];
	Var2[5] = Var0[2][5] ^ Var0[1][5];
	Var0[3][0] = Var2[0];
	Var0[3][1] = Var2[1];
	Var0[3][2] = Var2[2];
	Var0[3][3] = Var2[3];
	Var0[3][4] = Var2[4];
	Var0[3][5] = Var2[5];
	Var3[5] = (Var0[2][5] << 1u) ^ (Var0[2][4] >> 31u);
	Var3[4] = (Var0[2][4] << 1u) ^ (Var0[2][3] >> 31u);
	Var3[3] = (Var0[2][3] << 1u) ^ (Var0[2][2] >> 31u);
	Var3[2] = (Var0[2][2] << 1u) ^ (Var0[2][1] >> 31u);
	Var3[1] = (Var0[2][1] << 1u) ^ (Var0[2][0] >> 31u);
	Var3[0] = Var0[2][0] << 1u;
	Var0[4][0] = Var3[0];
	Var0[4][1] = Var3[1];
	Var0[4][2] = Var3[2];
	Var0[4][3] = Var3[3];
	Var0[4][4] = Var3[4];
	Var0[4][5] = Var3[5];
	Var4[0] = Var0[4][0] ^ Var0[1][0];
	Var4[1] = Var0[4][1] ^ Var0[1][1];
	Var4[2] = Var0[4][2] ^ Var0[1][2];
	Var4[3] = Var0[4][3] ^ Var0[1][3];
	Var4[4] = Var0[4][4] ^ Var0[1][4];
	Var4[5] = Var0[4][5] ^ Var0[1][5];
	Var0[5][0] = Var4[0];
	Var0[5][1] = Var4[1];
	Var0[5][2] = Var4[2];
	Var0[5][3] = Var4[3];
	Var0[5][4] = Var4[4];
	Var0[5][5] = Var4[5];
	Var5[5] = (Var0[3][5] << 1u) ^ (Var0[3][4] >> 31u);
	Var5[4] = (Var0[3][4] << 1u) ^ (Var0[3][3] >> 31u);
	Var5[3] = (Var0[3][3] << 1u) ^ (Var0[3][2] >> 31u);
	Var5[2] = (Var0[3][2] << 1u) ^ (Var0[3][1] >> 31u);
	Var5[1] = (Var0[3][1] << 1u) ^ (Var0[3][0] >> 31u);
	Var5[0] = Var0[3][0] << 1u;
	Var0[6][0] = Var5[0];
	Var0[6][1] = Var5[1];
	Var0[6][2] = Var5[2];
	Var0[6][3] = Var5[3];
	Var0[6][4] = Var5[4];
	Var0[6][5] = Var5[5];
	Var6[0] = Var0[6][0] ^ Var0[1][0];
	Var6[1] = Var0[6][1] ^ Var0[1][1];
	Var6[2] = Var0[6][2] ^ Var0[1][2];
	Var6[3] = Var0[6][3] ^ Var0[1][3];
	Var6[4] = Var0[6][4] ^ Var0[1][4];
	Var6[5] = Var0[6][5] ^ Var0[1][5];
	Var0[7][0] = Var6[0];
	Var0[7][1] = Var6[1];
	Var0[7][2] = Var6[2];
	Var0[7][3] = Var6[3];
	Var0[7][4] = Var6[4];
	Var0[7][5] = Var6[5];
	Var7[0] = 0u;
	Var7[1] = 0u;
	Var7[2] = 0u;
	Var7[3] = 0u;
	Var7[4] = 0u;
	Var7[5] = 0u;
	Var9[0] = (In1[1] << 2u) ^ (In1[0] >> 30u);
	Var9[1] = ((In1[2] & 0x3ffffu) << 2u) ^ (In1[1] >> 30u);
	Var9[2] = 0u;
	Var8 = Var9[0] & 0x3u;
	Var10[0] = Var7[0] ^ Var0[Var8][0];
	Var10[1] = Var7[1] ^ Var0[Var8][1];
	Var10[2] = Var7[2] ^ Var0[Var8][2];
	Var10[3] = Var7[3] ^ Var0[Var8][3];
	Var10[4] = Var7[4] ^ Var0[Var8][4];
	Var10[5] = Var7[5] ^ Var0[Var8][5];
	Var7[0] = Var10[0];
	Var7[1] = Var10[1];
	Var7[2] = Var10[2];
	Var7[3] = Var10[3];
	Var7[4] = Var10[4];
	Var7[5] = Var10[5];
	Var12[0] = ((In1[2] & 0x3ffffu) << 2u) ^ (In1[1] >> 30u);
	Var12[1] = 0u;
	Var12[2] = 0u;
	Var11 = Var12[0] & 0x3u;
	Var13[5] = Var0[Var11][4];
	Var13[4] = Var0[Var11][3];
	Var13[3] = Var0[Var11][2];
	Var13[2] = Var0[Var11][1];
	Var13[1] = Var0[Var11][0];
	Var13[0] = 0u;
	Var14[0] = Var7[0] ^ Var13[0];
	Var14[1] = Var7[1] ^ Var13[1];
	Var14[2] = Var7[2] ^ Var13[2];
	Var14[3] = Var7[3] ^ Var13[3];
	Var14[4] = Var7[4] ^ Var13[4];
	Var14[5] = Var7[5] ^ Var13[5];
	Var7[0] = Var14[0];
	Var7[1] = Var14[1];
	Var7[2] = Var14[2];
	Var7[3] = Var14[3];
	Var7[4] = Var14[4];
	Var7[5] = Var14[5];
	Var15[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var15[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var15[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var15[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var15[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var15[0] = Var7[0] << 3u;
	Var7[0] = Var15[0];
	Var7[1] = Var15[1];
	Var7[2] = Var15[2];
	Var7[3] = Var15[3];
	Var7[4] = Var15[4];
	Var7[5] = Var15[5];
	Var17[0] = (In1[1] << 5u) ^ (In1[0] >> 27u);
	Var17[1] = ((In1[2] & 0x3ffffu) << 5u) ^ (In1[1] >> 27u);
	Var17[2] = 0u;
	Var16 = Var17[0] & 0x7u;
	Var18[0] = Var7[0] ^ Var0[Var16][0];
	Var18[1] = Var7[1] ^ Var0[Var16][1];
	Var18[2] = Var7[2] ^ Var0[Var16][2];
	Var18[3] = Var7[3] ^ Var0[Var16][3];
	Var18[4] = Var7[4] ^ Var0[Var16][4];
	Var18[5] = Var7[5] ^ Var0[Var16][5];
	Var7[0] = Var18[0];
	Var7[1] = Var18[1];
	Var7[2] = Var18[2];
	Var7[3] = Var18[3];
	Var7[4] = Var18[4];
	Var7[5] = Var18[5];
	Var20[0] = ((In1[2] & 0x3ffffu) << 5u) ^ (In1[1] >> 27u);
	Var20[1] = 0u;
	Var20[2] = 0u;
	Var19 = Var20[0] & 0x7u;
	Var21[5] = Var0[Var19][4];
	Var21[4] = Var0[Var19][3];
	Var21[3] = Var0[Var19][2];
	Var21[2] = Var0[Var19][1];
	Var21[1] = Var0[Var19][0];
	Var21[0] = 0u;
	Var22[0] = Var7[0] ^ Var21[0];
	Var22[1] = Var7[1] ^ Var21[1];
	Var22[2] = Var7[2] ^ Var21[2];
	Var22[3] = Var7[3] ^ Var21[3];
	Var22[4] = Var7[4] ^ Var21[4];
	Var22[5] = Var7[5] ^ Var21[5];
	Var7[0] = Var22[0];
	Var7[1] = Var22[1];
	Var7[2] = Var22[2];
	Var7[3] = Var22[3];
	Var7[4] = Var22[4];
	Var7[5] = Var22[5];
	Var23[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var23[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var23[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var23[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var23[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var23[0] = Var7[0] << 3u;
	Var7[0] = Var23[0];
	Var7[1] = Var23[1];
	Var7[2] = Var23[2];
	Var7[3] = Var23[3];
	Var7[4] = Var23[4];
	Var7[5] = Var23[5];
	Var25[0] = (In1[1] << 8u) ^ (In1[0] >> 24u);
	Var25[1] = ((In1[2] & 0x3ffffu) << 8u) ^ (In1[1] >> 24u);
	Var25[2] = 0u;
	Var24 = Var25[0] & 0x7u;
	Var26[0] = Var7[0] ^ Var0[Var24][0];
	Var26[1] = Var7[1] ^ Var0[Var24][1];
	Var26[2] = Var7[2] ^ Var0[Var24][2];
	Var26[3] = Var7[3] ^ Var0[Var24][3];
	Var26[4] = Var7[4] ^ Var0[Var24][4];
	Var26[5] = Var7[5] ^ Var0[Var24][5];
	Var7[0] = Var26[0];
	Var7[1] = Var26[1];
	Var7[2] = Var26[2];
	Var7[3] = Var26[3];
	Var7[4] = Var26[4];
	Var7[5] = Var26[5];
	Var28[0] = ((In1[2] & 0x3ffffu) << 8u) ^ (In1[1] >> 24u);
	Var28[1] = 0u;
	Var28[2] = 0u;
	Var27 = Var28[0] & 0x7u;
	Var29[5] = Var0[Var27][4];
	Var29[4] = Var0[Var27][3];
	Var29[3] = Var0[Var27][2];
	Var29[2] = Var0[Var27][1];
	Var29[1] = Var0[Var27][0];
	Var29[0] = 0u;
	Var30[0] = Var7[0] ^ Var29[0];
	Var30[1] = Var7[1] ^ Var29[1];
	Var30[2] = Var7[2] ^ Var29[2];
	Var30[3] = Var7[3] ^ Var29[3];
	Var30[4] = Var7[4] ^ Var29[4];
	Var30[5] = Var7[5] ^ Var29[5];
	Var7[0] = Var30[0];
	Var7[1] = Var30[1];
	Var7[2] = Var30[2];
	Var7[3] = Var30[3];
	Var7[4] = Var30[4];
	Var7[5] = Var30[5];
	Var31[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var31[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var31[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var31[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var31[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var31[0] = Var7[0] << 3u;
	Var7[0] = Var31[0];
	Var7[1] = Var31[1];
	Var7[2] = Var31[2];
	Var7[3] = Var31[3];
	Var7[4] = Var31[4];
	Var7[5] = Var31[5];
	Var33[0] = (In1[1] << 11u) ^ (In1[0] >> 21u);
	Var33[1] = ((In1[2] & 0x3ffffu) << 11u) ^ (In1[1] >> 21u);
	Var33[2] = 0u;
	Var32 = Var33[0] & 0x7u;
	Var34[0] = Var7[0] ^ Var0[Var32][0];
	Var34[1] = Var7[1] ^ Var0[Var32][1];
	Var34[2] = Var7[2] ^ Var0[Var32][2];
	Var34[3] = Var7[3] ^ Var0[Var32][3];
	Var34[4] = Var7[4] ^ Var0[Var32][4];
	Var34[5] = Var7[5] ^ Var0[Var32][5];
	Var7[0] = Var34[0];
	Var7[1] = Var34[1];
	Var7[2] = Var34[2];
	Var7[3] = Var34[3];
	Var7[4] = Var34[4];
	Var7[5] = Var34[5];
	Var36[0] = ((In1[2] & 0x3ffffu) << 11u) ^ (In1[1] >> 21u);
	Var36[1] = 0u;
	Var36[2] = 0u;
	Var35 = Var36[0] & 0x7u;
	Var37[5] = Var0[Var35][4];
	Var37[4] = Var0[Var35][3];
	Var37[3] = Var0[Var35][2];
	Var37[2] = Var0[Var35][1];
	Var37[1] = Var0[Var35][0];
	Var37[0] = 0u;
	Var38[0] = Var7[0] ^ Var37[0];
	Var38[1] = Var7[1] ^ Var37[1];
	Var38[2] = Var7[2] ^ Var37[2];
	Var38[3] = Var7[3] ^ Var37[3];
	Var38[4] = Var7[4] ^ Var37[4];
	Var38[5] = Var7[5] ^ Var37[5];
	Var7[0] = Var38[0];
	Var7[1] = Var38[1];
	Var7[2] = Var38[2];
	Var7[3] = Var38[3];
	Var7[4] = Var38[4];
	Var7[5] = Var38[5];
	Var39[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var39[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var39[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var39[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var39[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var39[0] = Var7[0] << 3u;
	Var7[0] = Var39[0];
	Var7[1] = Var39[1];
	Var7[2] = Var39[2];
	Var7[3] = Var39[3];
	Var7[4] = Var39[4];
	Var7[5] = Var39[5];
	Var41[0] = (In1[1] << 14u) ^ (In1[0] >> 18u);
	Var41[1] = (In1[2] << 14u) ^ (In1[1] >> 18u);
	Var41[2] = 0u;
	Var40 = Var41[0] & 0x7u;
	Var42[0] = Var7[0] ^ Var0[Var40][0];
	Var42[1] = Var7[1] ^ Var0[Var40][1];
	Var42[2] = Var7[2] ^ Var0[Var40][2];
	Var42[3] = Var7[3] ^ Var0[Var40][3];
	Var42[4] = Var7[4] ^ Var0[Var40][4];
	Var42[5] = Var7[5] ^ Var0[Var40][5];
	Var7[0] = Var42[0];
	Var7[1] = Var42[1];
	Var7[2] = Var42[2];
	Var7[3] = Var42[3];
	Var7[4] = Var42[4];
	Var7[5] = Var42[5];
	Var44[0] = (In1[2] << 14u) ^ (In1[1] >> 18u);
	Var44[1] = 0u;
	Var44[2] = 0u;
	Var43 = Var44[0] & 0x7u;
	Var45[5] = Var0[Var43][4];
	Var45[4] = Var0[Var43][3];
	Var45[3] = Var0[Var43][2];
	Var45[2] = Var0[Var43][1];
	Var45[1] = Var0[Var43][0];
	Var45[0] = 0u;
	Var46[0] = Var7[0] ^ Var45[0];
	Var46[1] = Var7[1] ^ Var45[1];
	Var46[2] = Var7[2] ^ Var45[2];
	Var46[3] = Var7[3] ^ Var45[3];
	Var46[4] = Var7[4] ^ Var45[4];
	Var46[5] = Var7[5] ^ Var45[5];
	Var7[0] = Var46[0];
	Var7[1] = Var46[1];
	Var7[2] = Var46[2];
	Var7[3] = Var46[3];
	Var7[4] = Var46[4];
	Var7[5] = Var46[5];
	Var47[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var47[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var47[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var47[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var47[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var47[0] = Var7[0] << 3u;
	Var7[0] = Var47[0];
	Var7[1] = Var47[1];
	Var7[2] = Var47[2];
	Var7[3] = Var47[3];
	Var7[4] = Var47[4];
	Var7[5] = Var47[5];
	Var49[0] = (In1[1] << 17u) ^ (In1[0] >> 15u);
	Var49[1] = (In1[2] << 17u) ^ (In1[1] >> 15u);
	Var49[2] = (In1[2] & 0x3ffffu) >> 15u;
	Var48 = Var49[0] & 0x7u;
	Var50[0] = Var7[0] ^ Var0[Var48][0];
	Var50[1] = Var7[1] ^ Var0[Var48][1];
	Var50[2] = Var7[2] ^ Var0[Var48][2];
	Var50[3] = Var7[3] ^ Var0[Var48][3];
	Var50[4] = Var7[4] ^ Var0[Var48][4];
	Var50[5] = Var7[5] ^ Var0[Var48][5];
	Var7[0] = Var50[0];
	Var7[1] = Var50[1];
	Var7[2] = Var50[2];
	Var7[3] = Var50[3];
	Var7[4] = Var50[4];
	Var7[5] = Var50[5];
	Var52[0] = (In1[2] << 17u) ^ (In1[1] >> 15u);
	Var52[1] = (In1[2] & 0x3ffffu) >> 15u;
	Var52[2] = 0u;
	Var51 = Var52[0] & 0x7u;
	Var53[5] = Var0[Var51][4];
	Var53[4] = Var0[Var51][3];
	Var53[3] = Var0[Var51][2];
	Var53[2] = Var0[Var51][1];
	Var53[1] = Var0[Var51][0];
	Var53[0] = 0u;
	Var54[0] = Var7[0] ^ Var53[0];
	Var54[1] = Var7[1] ^ Var53[1];
	Var54[2] = Var7[2] ^ Var53[2];
	Var54[3] = Var7[3] ^ Var53[3];
	Var54[4] = Var7[4] ^ Var53[4];
	Var54[5] = Var7[5] ^ Var53[5];
	Var7[0] = Var54[0];
	Var7[1] = Var54[1];
	Var7[2] = Var54[2];
	Var7[3] = Var54[3];
	Var7[4] = Var54[4];
	Var7[5] = Var54[5];
	Var56[0] = (In1[2] & 0x3ffffu) >> 15u;
	Var56[1] = 0u;
	Var56[2] = 0u;
	Var55 = Var56[0] & 0x7u;
	Var57[5] = Var0[Var55][3];
	Var57[4] = Var0[Var55][2];
	Var57[3] = Var0[Var55][1];
	Var57[2] = Var0[Var55][0];
	Var57[1] = 0u;
	Var57[0] = 0u;
	Var58[0] = Var7[0] ^ Var57[0];
	Var58[1] = Var7[1] ^ Var57[1];
	Var58[2] = Var7[2] ^ Var57[2];
	Var58[3] = Var7[3] ^ Var57[3];
	Var58[4] = Var7[4] ^ Var57[4];
	Var58[5] = Var7[5] ^ Var57[5];
	Var7[0] = Var58[0];
	Var7[1] = Var58[1];
	Var7[2] = Var58[2];
	Var7[3] = Var58[3];
	Var7[4] = Var58[4];
	Var7[5] = Var58[5];
	Var59[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var59[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var59[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var59[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var59[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var59[0] = Var7[0] << 3u;
	Var7[0] = Var59[0];
	Var7[1] = Var59[1];
	Var7[2] = Var59[2];
	Var7[3] = Var59[3];
	Var7[4] = Var59[4];
	Var7[5] = Var59[5];
	Var61[0] = (In1[1] << 20u) ^ (In1[0] >> 12u);
	Var61[1] = (In1[2] << 20u) ^ (In1[1] >> 12u);
	Var61[2] = (In1[2] & 0x3ffffu) >> 12u;
	Var60 = Var61[0] & 0x7u;
	Var62[0] = Var7[0] ^ Var0[Var60][0];
	Var62[1] = Var7[1] ^ Var0[Var60][1];
	Var62[2] = Var7[2] ^ Var0[Var60][2];
	Var62[3] = Var7[3] ^ Var0[Var60][3];
	Var62[4] = Var7[4] ^ Var0[Var60][4];
	Var62[5] = Var7[5] ^ Var0[Var60][5];
	Var7[0] = Var62[0];
	Var7[1] = Var62[1];
	Var7[2] = Var62[2];
	Var7[3] = Var62[3];
	Var7[4] = Var62[4];
	Var7[5] = Var62[5];
	Var64[0] = (In1[2] << 20u) ^ (In1[1] >> 12u);
	Var64[1] = (In1[2] & 0x3ffffu) >> 12u;
	Var64[2] = 0u;
	Var63 = Var64[0] & 0x7u;
	Var65[5] = Var0[Var63][4];
	Var65[4] = Var0[Var63][3];
	Var65[3] = Var0[Var63][2];
	Var65[2] = Var0[Var63][1];
	Var65[1] = Var0[Var63][0];
	Var65[0] = 0u;
	Var66[0] = Var7[0] ^ Var65[0];
	Var66[1] = Var7[1] ^ Var65[1];
	Var66[2] = Var7[2] ^ Var65[2];
	Var66[3] = Var7[3] ^ Var65[3];
	Var66[4] = Var7[4] ^ Var65[4];
	Var66[5] = Var7[5] ^ Var65[5];
	Var7[0] = Var66[0];
	Var7[1] = Var66[1];
	Var7[2] = Var66[2];
	Var7[3] = Var66[3];
	Var7[4] = Var66[4];
	Var7[5] = Var66[5];
	Var68[0] = (In1[2] & 0x3ffffu) >> 12u;
	Var68[1] = 0u;
	Var68[2] = 0u;
	Var67 = Var68[0] & 0x7u;
	Var69[5] = Var0[Var67][3];
	Var69[4] = Var0[Var67][2];
	Var69[3] = Var0[Var67][1];
	Var69[2] = Var0[Var67][0];
	Var69[1] = 0u;
	Var69[0] = 0u;
	Var70[0] = Var7[0] ^ Var69[0];
	Var70[1] = Var7[1] ^ Var69[1];
	Var70[2] = Var7[2] ^ Var69[2];
	Var70[3] = Var7[3] ^ Var69[3];
	Var70[4] = Var7[4] ^ Var69[4];
	Var70[5] = Var7[5] ^ Var69[5];
	Var7[0] = Var70[0];
	Var7[1] = Var70[1];
	Var7[2] = Var70[2];
	Var7[3] = Var70[3];
	Var7[4] = Var70[4];
	Var7[5] = Var70[5];
	Var71[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var71[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var71[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var71[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var71[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var71[0] = Var7[0] << 3u;
	Var7[0] = Var71[0];
	Var7[1] = Var71[1];
	Var7[2] = Var71[2];
	Var7[3] = Var71[3];
	Var7[4] = Var71[4];
	Var7[5] = Var71[5];
	Var73[0] = (In1[1] << 23u) ^ (In1[0] >> 9u);
	Var73[1] = (In1[2] << 23u) ^ (In1[1] >> 9u);
	Var73[2] = (In1[2] & 0x3ffffu) >> 9u;
	Var72 = Var73[0] & 0x7u;
	Var74[0] = Var7[0] ^ Var0[Var72][0];
	Var74[1] = Var7[1] ^ Var0[Var72][1];
	Var74[2] = Var7[2] ^ Var0[Var72][2];
	Var74[3] = Var7[3] ^ Var0[Var72][3];
	Var74[4] = Var7[4] ^ Var0[Var72][4];
	Var74[5] = Var7[5] ^ Var0[Var72][5];
	Var7[0] = Var74[0];
	Var7[1] = Var74[1];
	Var7[2] = Var74[2];
	Var7[3] = Var74[3];
	Var7[4] = Var74[4];
	Var7[5] = Var74[5];
	Var76[0] = (In1[2] << 23u) ^ (In1[1] >> 9u);
	Var76[1] = (In1[2] & 0x3ffffu) >> 9u;
	Var76[2] = 0u;
	Var75 = Var76[0] & 0x7u;
	Var77[5] = Var0[Var75][4];
	Var77[4] = Var0[Var75][3];
	Var77[3] = Var0[Var75][2];
	Var77[2] = Var0[Var75][1];
	Var77[1] = Var0[Var75][0];
	Var77[0] = 0u;
	Var78[0] = Var7[0] ^ Var77[0];
	Var78[1] = Var7[1] ^ Var77[1];
	Var78[2] = Var7[2] ^ Var77[2];
	Var78[3] = Var7[3] ^ Var77[3];
	Var78[4] = Var7[4] ^ Var77[4];
	Var78[5] = Var7[5] ^ Var77[5];
	Var7[0] = Var78[0];
	Var7[1] = Var78[1];
	Var7[2] = Var78[2];
	Var7[3] = Var78[3];
	Var7[4] = Var78[4];
	Var7[5] = Var78[5];
	Var80[0] = (In1[2] & 0x3ffffu) >> 9u;
	Var80[1] = 0u;
	Var80[2] = 0u;
	Var79 = Var80[0] & 0x7u;
	Var81[5] = Var0[Var79][3];
	Var81[4] = Var0[Var79][2];
	Var81[3] = Var0[Var79][1];
	Var81[2] = Var0[Var79][0];
	Var81[1] = 0u;
	Var81[0] = 0u;
	Var82[0] = Var7[0] ^ Var81[0];
	Var82[1] = Var7[1] ^ Var81[1];
	Var82[2] = Var7[2] ^ Var81[2];
	Var82[3] = Var7[3] ^ Var81[3];
	Var82[4] = Var7[4] ^ Var81[4];
	Var82[5] = Var7[5] ^ Var81[5];
	Var7[0] = Var82[0];
	Var7[1] = Var82[1];
	Var7[2] = Var82[2];
	Var7[3] = Var82[3];
	Var7[4] = Var82[4];
	Var7[5] = Var82[5];
	Var83[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var83[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var83[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var83[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var83[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var83[0] = Var7[0] << 3u;
	Var7[0] = Var83[0];
	Var7[1] = Var83[1];
	Var7[2] = Var83[2];
	Var7[3] = Var83[3];
	Var7[4] = Var83[4];
	Var7[5] = Var83[5];
	Var85[0] = (In1[1] << 26u) ^ (In1[0] >> 6u);
	Var85[1] = (In1[2] << 26u) ^ (In1[1] >> 6u);
	Var85[2] = (In1[2] & 0x3ffffu) >> 6u;
	Var84 = Var85[0] & 0x7u;
	Var86[0] = Var7[0] ^ Var0[Var84][0];
	Var86[1] = Var7[1] ^ Var0[Var84][1];
	Var86[2] = Var7[2] ^ Var0[Var84][2];
	Var86[3] = Var7[3] ^ Var0[Var84][3];
	Var86[4] = Var7[4] ^ Var0[Var84][4];
	Var86[5] = Var7[5] ^ Var0[Var84][5];
	Var7[0] = Var86[0];
	Var7[1] = Var86[1];
	Var7[2] = Var86[2];
	Var7[3] = Var86[3];
	Var7[4] = Var86[4];
	Var7[5] = Var86[5];
	Var88[0] = (In1[2] << 26u) ^ (In1[1] >> 6u);
	Var88[1] = (In1[2] & 0x3ffffu) >> 6u;
	Var88[2] = 0u;
	Var87 = Var88[0] & 0x7u;
	Var89[5] = Var0[Var87][4];
	Var89[4] = Var0[Var87][3];
	Var89[3] = Var0[Var87][2];
	Var89[2] = Var0[Var87][1];
	Var89[1] = Var0[Var87][0];
	Var89[0] = 0u;
	Var90[0] = Var7[0] ^ Var89[0];
	Var90[1] = Var7[1] ^ Var89[1];
	Var90[2] = Var7[2] ^ Var89[2];
	Var90[3] = Var7[3] ^ Var89[3];
	Var90[4] = Var7[4] ^ Var89[4];
	Var90[5] = Var7[5] ^ Var89[5];
	Var7[0] = Var90[0];
	Var7[1] = Var90[1];
	Var7[2] = Var90[2];
	Var7[3] = Var90[3];
	Var7[4] = Var90[4];
	Var7[5] = Var90[5];
	Var92[0] = (In1[2] & 0x3ffffu) >> 6u;
	Var92[1] = 0u;
	Var92[2] = 0u;
	Var91 = Var92[0] & 0x7u;
	Var93[5] = Var0[Var91][3];
	Var93[4] = Var0[Var91][2];
	Var93[3] = Var0[Var91][1];
	Var93[2] = Var0[Var91][0];
	Var93[1] = 0u;
	Var93[0] = 0u;
	Var94[0] = Var7[0] ^ Var93[0];
	Var94[1] = Var7[1] ^ Var93[1];
	Var94[2] = Var7[2] ^ Var93[2];
	Var94[3] = Var7[3] ^ Var93[3];
	Var94[4] = Var7[4] ^ Var93[4];
	Var94[5] = Var7[5] ^ Var93[5];
	Var7[0] = Var94[0];
	Var7[1] = Var94[1];
	Var7[2] = Var94[2];
	Var7[3] = Var94[3];
	Var7[4] = Var94[4];
	Var7[5] = Var94[5];
	Var95[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var95[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var95[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var95[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var95[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var95[0] = Var7[0] << 3u;
	Var7[0] = Var95[0];
	Var7[1] = Var95[1];
	Var7[2] = Var95[2];
	Var7[3] = Var95[3];
	Var7[4] = Var95[4];
	Var7[5] = Var95[5];
	Var97[0] = (In1[1] << 29u) ^ (In1[0] >> 3u);
	Var97[1] = (In1[2] << 29u) ^ (In1[1] >> 3u);
	Var97[2] = (In1[2] & 0x3ffffu) >> 3u;
	Var96 = Var97[0] & 0x7u;
	Var98[0] = Var7[0] ^ Var0[Var96][0];
	Var98[1] = Var7[1] ^ Var0[Var96][1];
	Var98[2] = Var7[2] ^ Var0[Var96][2];
	Var98[3] = Var7[3] ^ Var0[Var96][3];
	Var98[4] = Var7[4] ^ Var0[Var96][4];
	Var98[5] = Var7[5] ^ Var0[Var96][5];
	Var7[0] = Var98[0];
	Var7[1] = Var98[1];
	Var7[2] = Var98[2];
	Var7[3] = Var98[3];
	Var7[4] = Var98[4];
	Var7[5] = Var98[5];
	Var100[0] = (In1[2] << 29u) ^ (In1[1] >> 3u);
	Var100[1] = (In1[2] & 0x3ffffu) >> 3u;
	Var100[2] = 0u;
	Var99 = Var100[0] & 0x7u;
	Var101[5] = Var0[Var99][4];
	Var101[4] = Var0[Var99][3];
	Var101[3] = Var0[Var99][2];
	Var101[2] = Var0[Var99][1];
	Var101[1] = Var0[Var99][0];
	Var101[0] = 0u;
	Var102[0] = Var7[0] ^ Var101[0];
	Var102[1] = Var7[1] ^ Var101[1];
	Var102[2] = Var7[2] ^ Var101[2];
	Var102[3] = Var7[3] ^ Var101[3];
	Var102[4] = Var7[4] ^ Var101[4];
	Var102[5] = Var7[5] ^ Var101[5];
	Var7[0] = Var102[0];
	Var7[1] = Var102[1];
	Var7[2] = Var102[2];
	Var7[3] = Var102[3];
	Var7[4] = Var102[4];
	Var7[5] = Var102[5];
	Var104[0] = (In1[2] & 0x3ffffu) >> 3u;
	Var104[1] = 0u;
	Var104[2] = 0u;
	Var103 = Var104[0] & 0x7u;
	Var105[5] = Var0[Var103][3];
	Var105[4] = Var0[Var103][2];
	Var105[3] = Var0[Var103][1];
	Var105[2] = Var0[Var103][0];
	Var105[1] = 0u;
	Var105[0] = 0u;
	Var106[0] = Var7[0] ^ Var105[0];
	Var106[1] = Var7[1] ^ Var105[1];
	Var106[2] = Var7[2] ^ Var105[2];
	Var106[3] = Var7[3] ^ Var105[3];
	Var106[4] = Var7[4] ^ Var105[4];
	Var106[5] = Var7[5] ^ Var105[5];
	Var7[0] = Var106[0];
	Var7[1] = Var106[1];
	Var7[2] = Var106[2];
	Var7[3] = Var106[3];
	Var7[4] = Var106[4];
	Var7[5] = Var106[5];
	Var107[5] = (Var7[5] << 3u) ^ (Var7[4] >> 29u);
	Var107[4] = (Var7[4] << 3u) ^ (Var7[3] >> 29u);
	Var107[3] = (Var7[3] << 3u) ^ (Var7[2] >> 29u);
	Var107[2] = (Var7[2] << 3u) ^ (Var7[1] >> 29u);
	Var107[1] = (Var7[1] << 3u) ^ (Var7[0] >> 29u);
	Var107[0] = Var7[0] << 3u;
	Var7[0] = Var107[0];
	Var7[1] = Var107[1];
	Var7[2] = Var107[2];
	Var7[3] = Var107[3];
	Var7[4] = Var107[4];
	Var7[5] = Var107[5];
	Var108 = In1[0] & 0x7u;
	Var109[0] = Var7[0] ^ Var0[Var108][0];
	Var109[1] = Var7[1] ^ Var0[Var108][1];
	Var109[2] = Var7[2] ^ Var0[Var108][2];
	Var109[3] = Var7[3] ^ Var0[Var108][3];
	Var109[4] = Var7[4] ^ Var0[Var108][4];
	Var109[5] = Var7[5] ^ Var0[Var108][5];
	Var7[0] = Var109[0];
	Var7[1] = Var109[1];
	Var7[2] = Var109[2];
	Var7[3] = Var109[3];
	Var7[4] = Var109[4];
	Var7[5] = Var109[5];
	Var111[0] = In1[1];
	Var111[1] = In1[2];
	Var111[2] = 0u;
	Var110 = Var111[0] & 0x7u;
	Var112[5] = Var0[Var110][4];
	Var112[4] = Var0[Var110][3];
	Var112[3] = Var0[Var110][2];
	Var112[2] = Var0[Var110][1];
	Var112[1] = Var0[Var110][0];
	Var112[0] = 0u;
	Var113[0] = Var7[0] ^ Var112[0];
	Var113[1] = Var7[1] ^ Var112[1];
	Var113[2] = Var7[2] ^ Var112[2];
	Var113[3] = Var7[3] ^ Var112[3];
	Var113[4] = Var7[4] ^ Var112[4];
	Var113[5] = Var7[5] ^ Var112[5];
	Var7[0] = Var113[0];
	Var7[1] = Var113[1];
	Var7[2] = Var113[2];
	Var7[3] = Var113[3];
	Var7[4] = Var113[4];
	Var7[5] = Var113[5];
	Var115[0] = In1[2];
	Var115[1] = 0u;
	Var115[2] = 0u;
	Var114 = Var115[0] & 0x7u;
	Var116[5] = Var0[Var114][3];
	Var116[4] = Var0[Var114][2];
	Var116[3] = Var0[Var114][1];
	Var116[2] = Var0[Var114][0];
	Var116[1] = 0u;
	Var116[0] = 0u;
	Var117[0] = Var7[0] ^ Var116[0];
	Var117[1] = Var7[1] ^ Var116[1];
	Var117[2] = Var7[2] ^ Var116[2];
	Var117[3] = Var7[3] ^ Var116[3];
	Var117[4] = Var7[4] ^ Var116[4];
	Var117[5] = Var7[5] ^ Var116[5];
	Var7[0] = Var117[0];
	Var7[1] = Var117[1];
	Var7[2] = Var117[2];
	Var7[3] = Var117[3];
	Var7[4] = Var117[4];
	Var7[5] = Var117[5];
	Out0[0] = Var7[0];
	Out0[1] = Var7[1];
	Out0[2] = Var7[2];
	Out0[3] = Var7[3];
	Out0[4] = Var7[4];
	Out0[5] = Var7[5];
}
