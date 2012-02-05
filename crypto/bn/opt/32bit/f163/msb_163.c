#include <stdint.h>
void msb_163_32(int *Out0, const uint32_t In0[6])
{
	static int Var0[256] = { -1, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };
	int Var1;
	uint32_t Var2[6];
	unsigned int Var3;
	uint32_t Var4[6];
	int Var5;
	unsigned int Var6;
	unsigned int Var7;
	uint32_t Var8[6];
	int Var9;
	unsigned int Var10;
	unsigned int Var11;
	uint32_t Var12[6];
	int Var13;
	unsigned int Var14;
	unsigned int Var15;
	uint32_t Var16[6];
	int Var17;
	unsigned int Var18;
	unsigned int Var19;
	uint32_t Var20[6];
	int Var21;
	unsigned int Var22;
	unsigned int Var23;
	uint32_t Var24[6];
	int Var25;
	unsigned int Var26;
	unsigned int Var27;
	uint32_t Var28[6];
	int Var29;
	unsigned int Var30;
	unsigned int Var31;
	uint32_t Var32[6];
	int Var33;
	unsigned int Var34;
	unsigned int Var35;
	uint32_t Var36[6];
	int Var37;
	unsigned int Var38;
	unsigned int Var39;
	uint32_t Var40[6];
	int Var41;
	unsigned int Var42;
	unsigned int Var43;
	uint32_t Var44[6];
	int Var45;
	unsigned int Var46;
	unsigned int Var47;
	uint32_t Var48[6];
	int Var49;
	unsigned int Var50;
	unsigned int Var51;
	uint32_t Var52[6];
	int Var53;
	unsigned int Var54;
	unsigned int Var55;
	uint32_t Var56[6];
	int Var57;
	unsigned int Var58;
	unsigned int Var59;
	uint32_t Var60[6];
	int Var61;
	unsigned int Var62;
	unsigned int Var63;
	uint32_t Var64[6];
	int Var65;
	unsigned int Var66;
	unsigned int Var67;
	uint32_t Var68[6];
	int Var69;
	unsigned int Var70;
	unsigned int Var71;
	uint32_t Var72[6];
	int Var73;
	unsigned int Var74;
	unsigned int Var75;
	uint32_t Var76[6];
	int Var77;
	unsigned int Var78;
	unsigned int Var79;
	uint32_t Var80[6];
	int Var81;
	unsigned int Var82;
	unsigned int Var83;
	int Var84;

	Var2[0] = In0[0];
	Var2[1] = In0[1];
	Var2[2] = In0[2];
	Var2[3] = In0[3];
	Var2[4] = In0[4];
	Var2[5] = In0[5];
	Var4[0] = Var2[5];
	Var4[1] = 0u;
	Var4[2] = 0u;
	Var4[3] = 0u;
	Var4[4] = 0u;
	Var4[5] = 0u;
	Var3 = Var4[0] & 0xfu;
	Var5 = Var0[Var3] + 160;
	Var1 = Var5;
	Var6 = Var1 == 159;
	if (Var6 != 0u)
	{
	Var8[0] = ((Var2[5] & 0xfu) << 8u) ^ (Var2[4] >> 24u);
	Var8[1] = 0u;
	Var8[2] = 0u;
	Var8[3] = 0u;
	Var8[4] = 0u;
	Var8[5] = 0u;
	Var7 = Var8[0] & 0xffu;
	Var9 = Var0[Var7] + 152;
	Var1 = Var9;
	Var10 = Var1 == 151;
	if (Var10 != 0u)
	{
	Var12[0] = ((Var2[5] & 0xfu) << 16u) ^ (Var2[4] >> 16u);
	Var12[1] = 0u;
	Var12[2] = 0u;
	Var12[3] = 0u;
	Var12[4] = 0u;
	Var12[5] = 0u;
	Var11 = Var12[0] & 0xffu;
	Var13 = Var0[Var11] + 144;
	Var1 = Var13;
	Var14 = Var1 == 143;
	if (Var14 != 0u)
	{
	Var16[0] = ((Var2[5] & 0xfu) << 24u) ^ (Var2[4] >> 8u);
	Var16[1] = 0u;
	Var16[2] = 0u;
	Var16[3] = 0u;
	Var16[4] = 0u;
	Var16[5] = 0u;
	Var15 = Var16[0] & 0xffu;
	Var17 = Var0[Var15] + 136;
	Var1 = Var17;
	Var18 = Var1 == 135;
	if (Var18 != 0u)
	{
	Var20[0] = Var2[4];
	Var20[1] = Var2[5];
	Var20[2] = 0u;
	Var20[3] = 0u;
	Var20[4] = 0u;
	Var20[5] = 0u;
	Var19 = Var20[0] & 0xffu;
	Var21 = Var0[Var19] + 128;
	Var1 = Var21;
	Var22 = Var1 == 127;
	if (Var22 != 0u)
	{
	Var24[0] = (Var2[4] << 8u) ^ (Var2[3] >> 24u);
	Var24[1] = ((Var2[5] & 0xfu) << 8u) ^ (Var2[4] >> 24u);
	Var24[2] = 0u;
	Var24[3] = 0u;
	Var24[4] = 0u;
	Var24[5] = 0u;
	Var23 = Var24[0] & 0xffu;
	Var25 = Var0[Var23] + 120;
	Var1 = Var25;
	Var26 = Var1 == 119;
	if (Var26 != 0u)
	{
	Var28[0] = (Var2[4] << 16u) ^ (Var2[3] >> 16u);
	Var28[1] = ((Var2[5] & 0xfu) << 16u) ^ (Var2[4] >> 16u);
	Var28[2] = 0u;
	Var28[3] = 0u;
	Var28[4] = 0u;
	Var28[5] = 0u;
	Var27 = Var28[0] & 0xffu;
	Var29 = Var0[Var27] + 112;
	Var1 = Var29;
	Var30 = Var1 == 111;
	if (Var30 != 0u)
	{
	Var32[0] = (Var2[4] << 24u) ^ (Var2[3] >> 8u);
	Var32[1] = ((Var2[5] & 0xfu) << 24u) ^ (Var2[4] >> 8u);
	Var32[2] = 0u;
	Var32[3] = 0u;
	Var32[4] = 0u;
	Var32[5] = 0u;
	Var31 = Var32[0] & 0xffu;
	Var33 = Var0[Var31] + 104;
	Var1 = Var33;
	Var34 = Var1 == 103;
	if (Var34 != 0u)
	{
	Var36[0] = Var2[3];
	Var36[1] = Var2[4];
	Var36[2] = Var2[5];
	Var36[3] = 0u;
	Var36[4] = 0u;
	Var36[5] = 0u;
	Var35 = Var36[0] & 0xffu;
	Var37 = Var0[Var35] + 96;
	Var1 = Var37;
	Var38 = Var1 == 95;
	if (Var38 != 0u)
	{
	Var40[0] = (Var2[3] << 8u) ^ (Var2[2] >> 24u);
	Var40[1] = (Var2[4] << 8u) ^ (Var2[3] >> 24u);
	Var40[2] = ((Var2[5] & 0xfu) << 8u) ^ (Var2[4] >> 24u);
	Var40[3] = 0u;
	Var40[4] = 0u;
	Var40[5] = 0u;
	Var39 = Var40[0] & 0xffu;
	Var41 = Var0[Var39] + 88;
	Var1 = Var41;
	Var42 = Var1 == 87;
	if (Var42 != 0u)
	{
	Var44[0] = (Var2[3] << 16u) ^ (Var2[2] >> 16u);
	Var44[1] = (Var2[4] << 16u) ^ (Var2[3] >> 16u);
	Var44[2] = ((Var2[5] & 0xfu) << 16u) ^ (Var2[4] >> 16u);
	Var44[3] = 0u;
	Var44[4] = 0u;
	Var44[5] = 0u;
	Var43 = Var44[0] & 0xffu;
	Var45 = Var0[Var43] + 80;
	Var1 = Var45;
	Var46 = Var1 == 79;
	if (Var46 != 0u)
	{
	Var48[0] = (Var2[3] << 24u) ^ (Var2[2] >> 8u);
	Var48[1] = (Var2[4] << 24u) ^ (Var2[3] >> 8u);
	Var48[2] = ((Var2[5] & 0xfu) << 24u) ^ (Var2[4] >> 8u);
	Var48[3] = 0u;
	Var48[4] = 0u;
	Var48[5] = 0u;
	Var47 = Var48[0] & 0xffu;
	Var49 = Var0[Var47] + 72;
	Var1 = Var49;
	Var50 = Var1 == 71;
	if (Var50 != 0u)
	{
	Var52[0] = Var2[2];
	Var52[1] = Var2[3];
	Var52[2] = Var2[4];
	Var52[3] = Var2[5];
	Var52[4] = 0u;
	Var52[5] = 0u;
	Var51 = Var52[0] & 0xffu;
	Var53 = Var0[Var51] + 64;
	Var1 = Var53;
	Var54 = Var1 == 63;
	if (Var54 != 0u)
	{
	Var56[0] = (Var2[2] << 8u) ^ (Var2[1] >> 24u);
	Var56[1] = (Var2[3] << 8u) ^ (Var2[2] >> 24u);
	Var56[2] = (Var2[4] << 8u) ^ (Var2[3] >> 24u);
	Var56[3] = ((Var2[5] & 0xfu) << 8u) ^ (Var2[4] >> 24u);
	Var56[4] = 0u;
	Var56[5] = 0u;
	Var55 = Var56[0] & 0xffu;
	Var57 = Var0[Var55] + 56;
	Var1 = Var57;
	Var58 = Var1 == 55;
	if (Var58 != 0u)
	{
	Var60[0] = (Var2[2] << 16u) ^ (Var2[1] >> 16u);
	Var60[1] = (Var2[3] << 16u) ^ (Var2[2] >> 16u);
	Var60[2] = (Var2[4] << 16u) ^ (Var2[3] >> 16u);
	Var60[3] = ((Var2[5] & 0xfu) << 16u) ^ (Var2[4] >> 16u);
	Var60[4] = 0u;
	Var60[5] = 0u;
	Var59 = Var60[0] & 0xffu;
	Var61 = Var0[Var59] + 48;
	Var1 = Var61;
	Var62 = Var1 == 47;
	if (Var62 != 0u)
	{
	Var64[0] = (Var2[2] << 24u) ^ (Var2[1] >> 8u);
	Var64[1] = (Var2[3] << 24u) ^ (Var2[2] >> 8u);
	Var64[2] = (Var2[4] << 24u) ^ (Var2[3] >> 8u);
	Var64[3] = ((Var2[5] & 0xfu) << 24u) ^ (Var2[4] >> 8u);
	Var64[4] = 0u;
	Var64[5] = 0u;
	Var63 = Var64[0] & 0xffu;
	Var65 = Var0[Var63] + 40;
	Var1 = Var65;
	Var66 = Var1 == 39;
	if (Var66 != 0u)
	{
	Var68[0] = Var2[1];
	Var68[1] = Var2[2];
	Var68[2] = Var2[3];
	Var68[3] = Var2[4];
	Var68[4] = Var2[5];
	Var68[5] = 0u;
	Var67 = Var68[0] & 0xffu;
	Var69 = Var0[Var67] + 32;
	Var1 = Var69;
	Var70 = Var1 == 31;
	if (Var70 != 0u)
	{
	Var72[0] = (Var2[1] << 8u) ^ (Var2[0] >> 24u);
	Var72[1] = (Var2[2] << 8u) ^ (Var2[1] >> 24u);
	Var72[2] = (Var2[3] << 8u) ^ (Var2[2] >> 24u);
	Var72[3] = (Var2[4] << 8u) ^ (Var2[3] >> 24u);
	Var72[4] = ((Var2[5] & 0xfu) << 8u) ^ (Var2[4] >> 24u);
	Var72[5] = 0u;
	Var71 = Var72[0] & 0xffu;
	Var73 = Var0[Var71] + 24;
	Var1 = Var73;
	Var74 = Var1 == 23;
	if (Var74 != 0u)
	{
	Var76[0] = (Var2[1] << 16u) ^ (Var2[0] >> 16u);
	Var76[1] = (Var2[2] << 16u) ^ (Var2[1] >> 16u);
	Var76[2] = (Var2[3] << 16u) ^ (Var2[2] >> 16u);
	Var76[3] = (Var2[4] << 16u) ^ (Var2[3] >> 16u);
	Var76[4] = ((Var2[5] & 0xfu) << 16u) ^ (Var2[4] >> 16u);
	Var76[5] = 0u;
	Var75 = Var76[0] & 0xffu;
	Var77 = Var0[Var75] + 16;
	Var1 = Var77;
	Var78 = Var1 == 15;
	if (Var78 != 0u)
	{
	Var80[0] = (Var2[1] << 24u) ^ (Var2[0] >> 8u);
	Var80[1] = (Var2[2] << 24u) ^ (Var2[1] >> 8u);
	Var80[2] = (Var2[3] << 24u) ^ (Var2[2] >> 8u);
	Var80[3] = (Var2[4] << 24u) ^ (Var2[3] >> 8u);
	Var80[4] = ((Var2[5] & 0xfu) << 24u) ^ (Var2[4] >> 8u);
	Var80[5] = 0u;
	Var79 = Var80[0] & 0xffu;
	Var81 = Var0[Var79] + 8;
	Var1 = Var81;
	Var82 = Var1 == 7;
	if (Var82 != 0u)
	{
	Var83 = Var2[0] & 0xffu;
	Var84 = Var0[Var83] + 0;
	Var1 = Var84;
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	*Out0 = Var1;
}
