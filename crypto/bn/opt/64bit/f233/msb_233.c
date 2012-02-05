#include <stdint.h>
void msb_233_64(int *Out0, const uint64_t In0[4])
{
	static int Var0[256] = { -1, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };
	int Var1;
	uint64_t Var2[4];
	unsigned int Var3;
	uint64_t Var4[4];
	int Var5;
	unsigned int Var6;
	unsigned int Var7;
	uint64_t Var8[4];
	int Var9;
	unsigned int Var10;
	unsigned int Var11;
	uint64_t Var12[4];
	int Var13;
	unsigned int Var14;
	unsigned int Var15;
	uint64_t Var16[4];
	int Var17;
	unsigned int Var18;
	unsigned int Var19;
	uint64_t Var20[4];
	int Var21;
	unsigned int Var22;
	unsigned int Var23;
	uint64_t Var24[4];
	int Var25;
	unsigned int Var26;
	unsigned int Var27;
	uint64_t Var28[4];
	int Var29;
	unsigned int Var30;
	unsigned int Var31;
	uint64_t Var32[4];
	int Var33;
	unsigned int Var34;
	unsigned int Var35;
	uint64_t Var36[4];
	int Var37;
	unsigned int Var38;
	unsigned int Var39;
	uint64_t Var40[4];
	int Var41;
	unsigned int Var42;
	unsigned int Var43;
	uint64_t Var44[4];
	int Var45;
	unsigned int Var46;
	unsigned int Var47;
	uint64_t Var48[4];
	int Var49;
	unsigned int Var50;
	unsigned int Var51;
	uint64_t Var52[4];
	int Var53;
	unsigned int Var54;
	unsigned int Var55;
	uint64_t Var56[4];
	int Var57;
	unsigned int Var58;
	unsigned int Var59;
	uint64_t Var60[4];
	int Var61;
	unsigned int Var62;
	unsigned int Var63;
	uint64_t Var64[4];
	int Var65;
	unsigned int Var66;
	unsigned int Var67;
	uint64_t Var68[4];
	int Var69;
	unsigned int Var70;
	unsigned int Var71;
	uint64_t Var72[4];
	int Var73;
	unsigned int Var74;
	unsigned int Var75;
	uint64_t Var76[4];
	int Var77;
	unsigned int Var78;
	unsigned int Var79;
	uint64_t Var80[4];
	int Var81;
	unsigned int Var82;
	unsigned int Var83;
	uint64_t Var84[4];
	int Var85;
	unsigned int Var86;
	unsigned int Var87;
	uint64_t Var88[4];
	int Var89;
	unsigned int Var90;
	unsigned int Var91;
	uint64_t Var92[4];
	int Var93;
	unsigned int Var94;
	unsigned int Var95;
	uint64_t Var96[4];
	int Var97;
	unsigned int Var98;
	unsigned int Var99;
	uint64_t Var100[4];
	int Var101;
	unsigned int Var102;
	unsigned int Var103;
	uint64_t Var104[4];
	int Var105;
	unsigned int Var106;
	unsigned int Var107;
	uint64_t Var108[4];
	int Var109;
	unsigned int Var110;
	unsigned int Var111;
	uint64_t Var112[4];
	int Var113;
	unsigned int Var114;
	unsigned int Var115;
	uint64_t Var116[4];
	int Var117;
	unsigned int Var118;
	unsigned int Var119;
	int Var120;

	Var2[0] = In0[0];
	Var2[1] = In0[1];
	Var2[2] = In0[2];
	Var2[3] = In0[3];
	Var4[0] = (Var2[3] & 0x3ffffffffffu) >> 40u;
	Var4[1] = 0u;
	Var4[2] = 0u;
	Var4[3] = 0u;
	Var3 = Var4[0] & 0x3u;
	Var5 = Var0[Var3] + 232;
	Var1 = Var5;
	Var6 = Var1 == 231;
	if (Var6 != 0u)
	{
	Var8[0] = (Var2[3] & 0x3ffffffffffu) >> 32u;
	Var8[1] = 0u;
	Var8[2] = 0u;
	Var8[3] = 0u;
	Var7 = Var8[0] & 0xffu;
	Var9 = Var0[Var7] + 224;
	Var1 = Var9;
	Var10 = Var1 == 223;
	if (Var10 != 0u)
	{
	Var12[0] = (Var2[3] & 0x3ffffffffffu) >> 24u;
	Var12[1] = 0u;
	Var12[2] = 0u;
	Var12[3] = 0u;
	Var11 = Var12[0] & 0xffu;
	Var13 = Var0[Var11] + 216;
	Var1 = Var13;
	Var14 = Var1 == 215;
	if (Var14 != 0u)
	{
	Var16[0] = (Var2[3] & 0x3ffffffffffu) >> 16u;
	Var16[1] = 0u;
	Var16[2] = 0u;
	Var16[3] = 0u;
	Var15 = Var16[0] & 0xffu;
	Var17 = Var0[Var15] + 208;
	Var1 = Var17;
	Var18 = Var1 == 207;
	if (Var18 != 0u)
	{
	Var20[0] = (Var2[3] & 0x3ffffffffffu) >> 8u;
	Var20[1] = 0u;
	Var20[2] = 0u;
	Var20[3] = 0u;
	Var19 = Var20[0] & 0xffu;
	Var21 = Var0[Var19] + 200;
	Var1 = Var21;
	Var22 = Var1 == 199;
	if (Var22 != 0u)
	{
	Var24[0] = Var2[3];
	Var24[1] = 0u;
	Var24[2] = 0u;
	Var24[3] = 0u;
	Var23 = Var24[0] & 0xffu;
	Var25 = Var0[Var23] + 192;
	Var1 = Var25;
	Var26 = Var1 == 191;
	if (Var26 != 0u)
	{
	Var28[0] = ((Var2[3] & 0x3ffffffffffu) << 8u) ^ (Var2[2] >> 56u);
	Var28[1] = 0u;
	Var28[2] = 0u;
	Var28[3] = 0u;
	Var27 = Var28[0] & 0xffu;
	Var29 = Var0[Var27] + 184;
	Var1 = Var29;
	Var30 = Var1 == 183;
	if (Var30 != 0u)
	{
	Var32[0] = ((Var2[3] & 0x3ffffffffffu) << 16u) ^ (Var2[2] >> 48u);
	Var32[1] = 0u;
	Var32[2] = 0u;
	Var32[3] = 0u;
	Var31 = Var32[0] & 0xffu;
	Var33 = Var0[Var31] + 176;
	Var1 = Var33;
	Var34 = Var1 == 175;
	if (Var34 != 0u)
	{
	Var36[0] = (Var2[3] << 24u) ^ (Var2[2] >> 40u);
	Var36[1] = (Var2[3] & 0x3ffffffffffu) >> 40u;
	Var36[2] = 0u;
	Var36[3] = 0u;
	Var35 = Var36[0] & 0xffu;
	Var37 = Var0[Var35] + 168;
	Var1 = Var37;
	Var38 = Var1 == 167;
	if (Var38 != 0u)
	{
	Var40[0] = (Var2[3] << 32u) ^ (Var2[2] >> 32u);
	Var40[1] = (Var2[3] & 0x3ffffffffffu) >> 32u;
	Var40[2] = 0u;
	Var40[3] = 0u;
	Var39 = Var40[0] & 0xffu;
	Var41 = Var0[Var39] + 160;
	Var1 = Var41;
	Var42 = Var1 == 159;
	if (Var42 != 0u)
	{
	Var44[0] = (Var2[3] << 40u) ^ (Var2[2] >> 24u);
	Var44[1] = (Var2[3] & 0x3ffffffffffu) >> 24u;
	Var44[2] = 0u;
	Var44[3] = 0u;
	Var43 = Var44[0] & 0xffu;
	Var45 = Var0[Var43] + 152;
	Var1 = Var45;
	Var46 = Var1 == 151;
	if (Var46 != 0u)
	{
	Var48[0] = (Var2[3] << 48u) ^ (Var2[2] >> 16u);
	Var48[1] = (Var2[3] & 0x3ffffffffffu) >> 16u;
	Var48[2] = 0u;
	Var48[3] = 0u;
	Var47 = Var48[0] & 0xffu;
	Var49 = Var0[Var47] + 144;
	Var1 = Var49;
	Var50 = Var1 == 143;
	if (Var50 != 0u)
	{
	Var52[0] = (Var2[3] << 56u) ^ (Var2[2] >> 8u);
	Var52[1] = (Var2[3] & 0x3ffffffffffu) >> 8u;
	Var52[2] = 0u;
	Var52[3] = 0u;
	Var51 = Var52[0] & 0xffu;
	Var53 = Var0[Var51] + 136;
	Var1 = Var53;
	Var54 = Var1 == 135;
	if (Var54 != 0u)
	{
	Var56[0] = Var2[2];
	Var56[1] = Var2[3];
	Var56[2] = 0u;
	Var56[3] = 0u;
	Var55 = Var56[0] & 0xffu;
	Var57 = Var0[Var55] + 128;
	Var1 = Var57;
	Var58 = Var1 == 127;
	if (Var58 != 0u)
	{
	Var60[0] = (Var2[2] << 8u) ^ (Var2[1] >> 56u);
	Var60[1] = ((Var2[3] & 0x3ffffffffffu) << 8u) ^ (Var2[2] >> 56u);
	Var60[2] = 0u;
	Var60[3] = 0u;
	Var59 = Var60[0] & 0xffu;
	Var61 = Var0[Var59] + 120;
	Var1 = Var61;
	Var62 = Var1 == 119;
	if (Var62 != 0u)
	{
	Var64[0] = (Var2[2] << 16u) ^ (Var2[1] >> 48u);
	Var64[1] = ((Var2[3] & 0x3ffffffffffu) << 16u) ^ (Var2[2] >> 48u);
	Var64[2] = 0u;
	Var64[3] = 0u;
	Var63 = Var64[0] & 0xffu;
	Var65 = Var0[Var63] + 112;
	Var1 = Var65;
	Var66 = Var1 == 111;
	if (Var66 != 0u)
	{
	Var68[0] = (Var2[2] << 24u) ^ (Var2[1] >> 40u);
	Var68[1] = (Var2[3] << 24u) ^ (Var2[2] >> 40u);
	Var68[2] = (Var2[3] & 0x3ffffffffffu) >> 40u;
	Var68[3] = 0u;
	Var67 = Var68[0] & 0xffu;
	Var69 = Var0[Var67] + 104;
	Var1 = Var69;
	Var70 = Var1 == 103;
	if (Var70 != 0u)
	{
	Var72[0] = (Var2[2] << 32u) ^ (Var2[1] >> 32u);
	Var72[1] = (Var2[3] << 32u) ^ (Var2[2] >> 32u);
	Var72[2] = (Var2[3] & 0x3ffffffffffu) >> 32u;
	Var72[3] = 0u;
	Var71 = Var72[0] & 0xffu;
	Var73 = Var0[Var71] + 96;
	Var1 = Var73;
	Var74 = Var1 == 95;
	if (Var74 != 0u)
	{
	Var76[0] = (Var2[2] << 40u) ^ (Var2[1] >> 24u);
	Var76[1] = (Var2[3] << 40u) ^ (Var2[2] >> 24u);
	Var76[2] = (Var2[3] & 0x3ffffffffffu) >> 24u;
	Var76[3] = 0u;
	Var75 = Var76[0] & 0xffu;
	Var77 = Var0[Var75] + 88;
	Var1 = Var77;
	Var78 = Var1 == 87;
	if (Var78 != 0u)
	{
	Var80[0] = (Var2[2] << 48u) ^ (Var2[1] >> 16u);
	Var80[1] = (Var2[3] << 48u) ^ (Var2[2] >> 16u);
	Var80[2] = (Var2[3] & 0x3ffffffffffu) >> 16u;
	Var80[3] = 0u;
	Var79 = Var80[0] & 0xffu;
	Var81 = Var0[Var79] + 80;
	Var1 = Var81;
	Var82 = Var1 == 79;
	if (Var82 != 0u)
	{
	Var84[0] = (Var2[2] << 56u) ^ (Var2[1] >> 8u);
	Var84[1] = (Var2[3] << 56u) ^ (Var2[2] >> 8u);
	Var84[2] = (Var2[3] & 0x3ffffffffffu) >> 8u;
	Var84[3] = 0u;
	Var83 = Var84[0] & 0xffu;
	Var85 = Var0[Var83] + 72;
	Var1 = Var85;
	Var86 = Var1 == 71;
	if (Var86 != 0u)
	{
	Var88[0] = Var2[1];
	Var88[1] = Var2[2];
	Var88[2] = Var2[3];
	Var88[3] = 0u;
	Var87 = Var88[0] & 0xffu;
	Var89 = Var0[Var87] + 64;
	Var1 = Var89;
	Var90 = Var1 == 63;
	if (Var90 != 0u)
	{
	Var92[0] = (Var2[1] << 8u) ^ (Var2[0] >> 56u);
	Var92[1] = (Var2[2] << 8u) ^ (Var2[1] >> 56u);
	Var92[2] = ((Var2[3] & 0x3ffffffffffu) << 8u) ^ (Var2[2] >> 56u);
	Var92[3] = 0u;
	Var91 = Var92[0] & 0xffu;
	Var93 = Var0[Var91] + 56;
	Var1 = Var93;
	Var94 = Var1 == 55;
	if (Var94 != 0u)
	{
	Var96[0] = (Var2[1] << 16u) ^ (Var2[0] >> 48u);
	Var96[1] = (Var2[2] << 16u) ^ (Var2[1] >> 48u);
	Var96[2] = ((Var2[3] & 0x3ffffffffffu) << 16u) ^ (Var2[2] >> 48u);
	Var96[3] = 0u;
	Var95 = Var96[0] & 0xffu;
	Var97 = Var0[Var95] + 48;
	Var1 = Var97;
	Var98 = Var1 == 47;
	if (Var98 != 0u)
	{
	Var100[0] = (Var2[1] << 24u) ^ (Var2[0] >> 40u);
	Var100[1] = (Var2[2] << 24u) ^ (Var2[1] >> 40u);
	Var100[2] = (Var2[3] << 24u) ^ (Var2[2] >> 40u);
	Var100[3] = (Var2[3] & 0x3ffffffffffu) >> 40u;
	Var99 = Var100[0] & 0xffu;
	Var101 = Var0[Var99] + 40;
	Var1 = Var101;
	Var102 = Var1 == 39;
	if (Var102 != 0u)
	{
	Var104[0] = (Var2[1] << 32u) ^ (Var2[0] >> 32u);
	Var104[1] = (Var2[2] << 32u) ^ (Var2[1] >> 32u);
	Var104[2] = (Var2[3] << 32u) ^ (Var2[2] >> 32u);
	Var104[3] = (Var2[3] & 0x3ffffffffffu) >> 32u;
	Var103 = Var104[0] & 0xffu;
	Var105 = Var0[Var103] + 32;
	Var1 = Var105;
	Var106 = Var1 == 31;
	if (Var106 != 0u)
	{
	Var108[0] = (Var2[1] << 40u) ^ (Var2[0] >> 24u);
	Var108[1] = (Var2[2] << 40u) ^ (Var2[1] >> 24u);
	Var108[2] = (Var2[3] << 40u) ^ (Var2[2] >> 24u);
	Var108[3] = (Var2[3] & 0x3ffffffffffu) >> 24u;
	Var107 = Var108[0] & 0xffu;
	Var109 = Var0[Var107] + 24;
	Var1 = Var109;
	Var110 = Var1 == 23;
	if (Var110 != 0u)
	{
	Var112[0] = (Var2[1] << 48u) ^ (Var2[0] >> 16u);
	Var112[1] = (Var2[2] << 48u) ^ (Var2[1] >> 16u);
	Var112[2] = (Var2[3] << 48u) ^ (Var2[2] >> 16u);
	Var112[3] = (Var2[3] & 0x3ffffffffffu) >> 16u;
	Var111 = Var112[0] & 0xffu;
	Var113 = Var0[Var111] + 16;
	Var1 = Var113;
	Var114 = Var1 == 15;
	if (Var114 != 0u)
	{
	Var116[0] = (Var2[1] << 56u) ^ (Var2[0] >> 8u);
	Var116[1] = (Var2[2] << 56u) ^ (Var2[1] >> 8u);
	Var116[2] = (Var2[3] << 56u) ^ (Var2[2] >> 8u);
	Var116[3] = (Var2[3] & 0x3ffffffffffu) >> 8u;
	Var115 = Var116[0] & 0xffu;
	Var117 = Var0[Var115] + 8;
	Var1 = Var117;
	Var118 = Var1 == 7;
	if (Var118 != 0u)
	{
	Var119 = Var2[0] & 0xffu;
	Var120 = Var0[Var119] + 0;
	Var1 = Var120;
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
