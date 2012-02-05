#include <stdint.h>
void msb_283_64(int *Out0, const uint64_t In0[5])
{
	static int Var0[256] = { -1, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };
	int Var1;
	uint64_t Var2[5];
	unsigned int Var3;
	uint64_t Var4[5];
	int Var5;
	unsigned int Var6;
	unsigned int Var7;
	uint64_t Var8[5];
	int Var9;
	unsigned int Var10;
	unsigned int Var11;
	uint64_t Var12[5];
	int Var13;
	unsigned int Var14;
	unsigned int Var15;
	uint64_t Var16[5];
	int Var17;
	unsigned int Var18;
	unsigned int Var19;
	uint64_t Var20[5];
	int Var21;
	unsigned int Var22;
	unsigned int Var23;
	uint64_t Var24[5];
	int Var25;
	unsigned int Var26;
	unsigned int Var27;
	uint64_t Var28[5];
	int Var29;
	unsigned int Var30;
	unsigned int Var31;
	uint64_t Var32[5];
	int Var33;
	unsigned int Var34;
	unsigned int Var35;
	uint64_t Var36[5];
	int Var37;
	unsigned int Var38;
	unsigned int Var39;
	uint64_t Var40[5];
	int Var41;
	unsigned int Var42;
	unsigned int Var43;
	uint64_t Var44[5];
	int Var45;
	unsigned int Var46;
	unsigned int Var47;
	uint64_t Var48[5];
	int Var49;
	unsigned int Var50;
	unsigned int Var51;
	uint64_t Var52[5];
	int Var53;
	unsigned int Var54;
	unsigned int Var55;
	uint64_t Var56[5];
	int Var57;
	unsigned int Var58;
	unsigned int Var59;
	uint64_t Var60[5];
	int Var61;
	unsigned int Var62;
	unsigned int Var63;
	uint64_t Var64[5];
	int Var65;
	unsigned int Var66;
	unsigned int Var67;
	uint64_t Var68[5];
	int Var69;
	unsigned int Var70;
	unsigned int Var71;
	uint64_t Var72[5];
	int Var73;
	unsigned int Var74;
	unsigned int Var75;
	uint64_t Var76[5];
	int Var77;
	unsigned int Var78;
	unsigned int Var79;
	uint64_t Var80[5];
	int Var81;
	unsigned int Var82;
	unsigned int Var83;
	uint64_t Var84[5];
	int Var85;
	unsigned int Var86;
	unsigned int Var87;
	uint64_t Var88[5];
	int Var89;
	unsigned int Var90;
	unsigned int Var91;
	uint64_t Var92[5];
	int Var93;
	unsigned int Var94;
	unsigned int Var95;
	uint64_t Var96[5];
	int Var97;
	unsigned int Var98;
	unsigned int Var99;
	uint64_t Var100[5];
	int Var101;
	unsigned int Var102;
	unsigned int Var103;
	uint64_t Var104[5];
	int Var105;
	unsigned int Var106;
	unsigned int Var107;
	uint64_t Var108[5];
	int Var109;
	unsigned int Var110;
	unsigned int Var111;
	uint64_t Var112[5];
	int Var113;
	unsigned int Var114;
	unsigned int Var115;
	uint64_t Var116[5];
	int Var117;
	unsigned int Var118;
	unsigned int Var119;
	uint64_t Var120[5];
	int Var121;
	unsigned int Var122;
	unsigned int Var123;
	uint64_t Var124[5];
	int Var125;
	unsigned int Var126;
	unsigned int Var127;
	uint64_t Var128[5];
	int Var129;
	unsigned int Var130;
	unsigned int Var131;
	uint64_t Var132[5];
	int Var133;
	unsigned int Var134;
	unsigned int Var135;
	uint64_t Var136[5];
	int Var137;
	unsigned int Var138;
	unsigned int Var139;
	uint64_t Var140[5];
	int Var141;
	unsigned int Var142;
	unsigned int Var143;
	int Var144;

	Var2[0] = In0[0];
	Var2[1] = In0[1];
	Var2[2] = In0[2];
	Var2[3] = In0[3];
	Var2[4] = In0[4];
	Var4[0] = (Var2[4] & 0xfffffffu) >> 24u;
	Var4[1] = 0u;
	Var4[2] = 0u;
	Var4[3] = 0u;
	Var4[4] = 0u;
	Var3 = Var4[0] & 0xfu;
	Var5 = Var0[Var3] + 280;
	Var1 = Var5;
	Var6 = Var1 == 279;
	if (Var6 != 0u)
	{
	Var8[0] = (Var2[4] & 0xfffffffu) >> 16u;
	Var8[1] = 0u;
	Var8[2] = 0u;
	Var8[3] = 0u;
	Var8[4] = 0u;
	Var7 = Var8[0] & 0xffu;
	Var9 = Var0[Var7] + 272;
	Var1 = Var9;
	Var10 = Var1 == 271;
	if (Var10 != 0u)
	{
	Var12[0] = (Var2[4] & 0xfffffffu) >> 8u;
	Var12[1] = 0u;
	Var12[2] = 0u;
	Var12[3] = 0u;
	Var12[4] = 0u;
	Var11 = Var12[0] & 0xffu;
	Var13 = Var0[Var11] + 264;
	Var1 = Var13;
	Var14 = Var1 == 263;
	if (Var14 != 0u)
	{
	Var16[0] = Var2[4];
	Var16[1] = 0u;
	Var16[2] = 0u;
	Var16[3] = 0u;
	Var16[4] = 0u;
	Var15 = Var16[0] & 0xffu;
	Var17 = Var0[Var15] + 256;
	Var1 = Var17;
	Var18 = Var1 == 255;
	if (Var18 != 0u)
	{
	Var20[0] = ((Var2[4] & 0xfffffffu) << 8u) ^ (Var2[3] >> 56u);
	Var20[1] = 0u;
	Var20[2] = 0u;
	Var20[3] = 0u;
	Var20[4] = 0u;
	Var19 = Var20[0] & 0xffu;
	Var21 = Var0[Var19] + 248;
	Var1 = Var21;
	Var22 = Var1 == 247;
	if (Var22 != 0u)
	{
	Var24[0] = ((Var2[4] & 0xfffffffu) << 16u) ^ (Var2[3] >> 48u);
	Var24[1] = 0u;
	Var24[2] = 0u;
	Var24[3] = 0u;
	Var24[4] = 0u;
	Var23 = Var24[0] & 0xffu;
	Var25 = Var0[Var23] + 240;
	Var1 = Var25;
	Var26 = Var1 == 239;
	if (Var26 != 0u)
	{
	Var28[0] = ((Var2[4] & 0xfffffffu) << 24u) ^ (Var2[3] >> 40u);
	Var28[1] = 0u;
	Var28[2] = 0u;
	Var28[3] = 0u;
	Var28[4] = 0u;
	Var27 = Var28[0] & 0xffu;
	Var29 = Var0[Var27] + 232;
	Var1 = Var29;
	Var30 = Var1 == 231;
	if (Var30 != 0u)
	{
	Var32[0] = ((Var2[4] & 0xfffffffu) << 32u) ^ (Var2[3] >> 32u);
	Var32[1] = 0u;
	Var32[2] = 0u;
	Var32[3] = 0u;
	Var32[4] = 0u;
	Var31 = Var32[0] & 0xffu;
	Var33 = Var0[Var31] + 224;
	Var1 = Var33;
	Var34 = Var1 == 223;
	if (Var34 != 0u)
	{
	Var36[0] = (Var2[4] << 40u) ^ (Var2[3] >> 24u);
	Var36[1] = (Var2[4] & 0xfffffffu) >> 24u;
	Var36[2] = 0u;
	Var36[3] = 0u;
	Var36[4] = 0u;
	Var35 = Var36[0] & 0xffu;
	Var37 = Var0[Var35] + 216;
	Var1 = Var37;
	Var38 = Var1 == 215;
	if (Var38 != 0u)
	{
	Var40[0] = (Var2[4] << 48u) ^ (Var2[3] >> 16u);
	Var40[1] = (Var2[4] & 0xfffffffu) >> 16u;
	Var40[2] = 0u;
	Var40[3] = 0u;
	Var40[4] = 0u;
	Var39 = Var40[0] & 0xffu;
	Var41 = Var0[Var39] + 208;
	Var1 = Var41;
	Var42 = Var1 == 207;
	if (Var42 != 0u)
	{
	Var44[0] = (Var2[4] << 56u) ^ (Var2[3] >> 8u);
	Var44[1] = (Var2[4] & 0xfffffffu) >> 8u;
	Var44[2] = 0u;
	Var44[3] = 0u;
	Var44[4] = 0u;
	Var43 = Var44[0] & 0xffu;
	Var45 = Var0[Var43] + 200;
	Var1 = Var45;
	Var46 = Var1 == 199;
	if (Var46 != 0u)
	{
	Var48[0] = Var2[3];
	Var48[1] = Var2[4];
	Var48[2] = 0u;
	Var48[3] = 0u;
	Var48[4] = 0u;
	Var47 = Var48[0] & 0xffu;
	Var49 = Var0[Var47] + 192;
	Var1 = Var49;
	Var50 = Var1 == 191;
	if (Var50 != 0u)
	{
	Var52[0] = (Var2[3] << 8u) ^ (Var2[2] >> 56u);
	Var52[1] = ((Var2[4] & 0xfffffffu) << 8u) ^ (Var2[3] >> 56u);
	Var52[2] = 0u;
	Var52[3] = 0u;
	Var52[4] = 0u;
	Var51 = Var52[0] & 0xffu;
	Var53 = Var0[Var51] + 184;
	Var1 = Var53;
	Var54 = Var1 == 183;
	if (Var54 != 0u)
	{
	Var56[0] = (Var2[3] << 16u) ^ (Var2[2] >> 48u);
	Var56[1] = ((Var2[4] & 0xfffffffu) << 16u) ^ (Var2[3] >> 48u);
	Var56[2] = 0u;
	Var56[3] = 0u;
	Var56[4] = 0u;
	Var55 = Var56[0] & 0xffu;
	Var57 = Var0[Var55] + 176;
	Var1 = Var57;
	Var58 = Var1 == 175;
	if (Var58 != 0u)
	{
	Var60[0] = (Var2[3] << 24u) ^ (Var2[2] >> 40u);
	Var60[1] = ((Var2[4] & 0xfffffffu) << 24u) ^ (Var2[3] >> 40u);
	Var60[2] = 0u;
	Var60[3] = 0u;
	Var60[4] = 0u;
	Var59 = Var60[0] & 0xffu;
	Var61 = Var0[Var59] + 168;
	Var1 = Var61;
	Var62 = Var1 == 167;
	if (Var62 != 0u)
	{
	Var64[0] = (Var2[3] << 32u) ^ (Var2[2] >> 32u);
	Var64[1] = ((Var2[4] & 0xfffffffu) << 32u) ^ (Var2[3] >> 32u);
	Var64[2] = 0u;
	Var64[3] = 0u;
	Var64[4] = 0u;
	Var63 = Var64[0] & 0xffu;
	Var65 = Var0[Var63] + 160;
	Var1 = Var65;
	Var66 = Var1 == 159;
	if (Var66 != 0u)
	{
	Var68[0] = (Var2[3] << 40u) ^ (Var2[2] >> 24u);
	Var68[1] = (Var2[4] << 40u) ^ (Var2[3] >> 24u);
	Var68[2] = (Var2[4] & 0xfffffffu) >> 24u;
	Var68[3] = 0u;
	Var68[4] = 0u;
	Var67 = Var68[0] & 0xffu;
	Var69 = Var0[Var67] + 152;
	Var1 = Var69;
	Var70 = Var1 == 151;
	if (Var70 != 0u)
	{
	Var72[0] = (Var2[3] << 48u) ^ (Var2[2] >> 16u);
	Var72[1] = (Var2[4] << 48u) ^ (Var2[3] >> 16u);
	Var72[2] = (Var2[4] & 0xfffffffu) >> 16u;
	Var72[3] = 0u;
	Var72[4] = 0u;
	Var71 = Var72[0] & 0xffu;
	Var73 = Var0[Var71] + 144;
	Var1 = Var73;
	Var74 = Var1 == 143;
	if (Var74 != 0u)
	{
	Var76[0] = (Var2[3] << 56u) ^ (Var2[2] >> 8u);
	Var76[1] = (Var2[4] << 56u) ^ (Var2[3] >> 8u);
	Var76[2] = (Var2[4] & 0xfffffffu) >> 8u;
	Var76[3] = 0u;
	Var76[4] = 0u;
	Var75 = Var76[0] & 0xffu;
	Var77 = Var0[Var75] + 136;
	Var1 = Var77;
	Var78 = Var1 == 135;
	if (Var78 != 0u)
	{
	Var80[0] = Var2[2];
	Var80[1] = Var2[3];
	Var80[2] = Var2[4];
	Var80[3] = 0u;
	Var80[4] = 0u;
	Var79 = Var80[0] & 0xffu;
	Var81 = Var0[Var79] + 128;
	Var1 = Var81;
	Var82 = Var1 == 127;
	if (Var82 != 0u)
	{
	Var84[0] = (Var2[2] << 8u) ^ (Var2[1] >> 56u);
	Var84[1] = (Var2[3] << 8u) ^ (Var2[2] >> 56u);
	Var84[2] = ((Var2[4] & 0xfffffffu) << 8u) ^ (Var2[3] >> 56u);
	Var84[3] = 0u;
	Var84[4] = 0u;
	Var83 = Var84[0] & 0xffu;
	Var85 = Var0[Var83] + 120;
	Var1 = Var85;
	Var86 = Var1 == 119;
	if (Var86 != 0u)
	{
	Var88[0] = (Var2[2] << 16u) ^ (Var2[1] >> 48u);
	Var88[1] = (Var2[3] << 16u) ^ (Var2[2] >> 48u);
	Var88[2] = ((Var2[4] & 0xfffffffu) << 16u) ^ (Var2[3] >> 48u);
	Var88[3] = 0u;
	Var88[4] = 0u;
	Var87 = Var88[0] & 0xffu;
	Var89 = Var0[Var87] + 112;
	Var1 = Var89;
	Var90 = Var1 == 111;
	if (Var90 != 0u)
	{
	Var92[0] = (Var2[2] << 24u) ^ (Var2[1] >> 40u);
	Var92[1] = (Var2[3] << 24u) ^ (Var2[2] >> 40u);
	Var92[2] = ((Var2[4] & 0xfffffffu) << 24u) ^ (Var2[3] >> 40u);
	Var92[3] = 0u;
	Var92[4] = 0u;
	Var91 = Var92[0] & 0xffu;
	Var93 = Var0[Var91] + 104;
	Var1 = Var93;
	Var94 = Var1 == 103;
	if (Var94 != 0u)
	{
	Var96[0] = (Var2[2] << 32u) ^ (Var2[1] >> 32u);
	Var96[1] = (Var2[3] << 32u) ^ (Var2[2] >> 32u);
	Var96[2] = ((Var2[4] & 0xfffffffu) << 32u) ^ (Var2[3] >> 32u);
	Var96[3] = 0u;
	Var96[4] = 0u;
	Var95 = Var96[0] & 0xffu;
	Var97 = Var0[Var95] + 96;
	Var1 = Var97;
	Var98 = Var1 == 95;
	if (Var98 != 0u)
	{
	Var100[0] = (Var2[2] << 40u) ^ (Var2[1] >> 24u);
	Var100[1] = (Var2[3] << 40u) ^ (Var2[2] >> 24u);
	Var100[2] = (Var2[4] << 40u) ^ (Var2[3] >> 24u);
	Var100[3] = (Var2[4] & 0xfffffffu) >> 24u;
	Var100[4] = 0u;
	Var99 = Var100[0] & 0xffu;
	Var101 = Var0[Var99] + 88;
	Var1 = Var101;
	Var102 = Var1 == 87;
	if (Var102 != 0u)
	{
	Var104[0] = (Var2[2] << 48u) ^ (Var2[1] >> 16u);
	Var104[1] = (Var2[3] << 48u) ^ (Var2[2] >> 16u);
	Var104[2] = (Var2[4] << 48u) ^ (Var2[3] >> 16u);
	Var104[3] = (Var2[4] & 0xfffffffu) >> 16u;
	Var104[4] = 0u;
	Var103 = Var104[0] & 0xffu;
	Var105 = Var0[Var103] + 80;
	Var1 = Var105;
	Var106 = Var1 == 79;
	if (Var106 != 0u)
	{
	Var108[0] = (Var2[2] << 56u) ^ (Var2[1] >> 8u);
	Var108[1] = (Var2[3] << 56u) ^ (Var2[2] >> 8u);
	Var108[2] = (Var2[4] << 56u) ^ (Var2[3] >> 8u);
	Var108[3] = (Var2[4] & 0xfffffffu) >> 8u;
	Var108[4] = 0u;
	Var107 = Var108[0] & 0xffu;
	Var109 = Var0[Var107] + 72;
	Var1 = Var109;
	Var110 = Var1 == 71;
	if (Var110 != 0u)
	{
	Var112[0] = Var2[1];
	Var112[1] = Var2[2];
	Var112[2] = Var2[3];
	Var112[3] = Var2[4];
	Var112[4] = 0u;
	Var111 = Var112[0] & 0xffu;
	Var113 = Var0[Var111] + 64;
	Var1 = Var113;
	Var114 = Var1 == 63;
	if (Var114 != 0u)
	{
	Var116[0] = (Var2[1] << 8u) ^ (Var2[0] >> 56u);
	Var116[1] = (Var2[2] << 8u) ^ (Var2[1] >> 56u);
	Var116[2] = (Var2[3] << 8u) ^ (Var2[2] >> 56u);
	Var116[3] = ((Var2[4] & 0xfffffffu) << 8u) ^ (Var2[3] >> 56u);
	Var116[4] = 0u;
	Var115 = Var116[0] & 0xffu;
	Var117 = Var0[Var115] + 56;
	Var1 = Var117;
	Var118 = Var1 == 55;
	if (Var118 != 0u)
	{
	Var120[0] = (Var2[1] << 16u) ^ (Var2[0] >> 48u);
	Var120[1] = (Var2[2] << 16u) ^ (Var2[1] >> 48u);
	Var120[2] = (Var2[3] << 16u) ^ (Var2[2] >> 48u);
	Var120[3] = ((Var2[4] & 0xfffffffu) << 16u) ^ (Var2[3] >> 48u);
	Var120[4] = 0u;
	Var119 = Var120[0] & 0xffu;
	Var121 = Var0[Var119] + 48;
	Var1 = Var121;
	Var122 = Var1 == 47;
	if (Var122 != 0u)
	{
	Var124[0] = (Var2[1] << 24u) ^ (Var2[0] >> 40u);
	Var124[1] = (Var2[2] << 24u) ^ (Var2[1] >> 40u);
	Var124[2] = (Var2[3] << 24u) ^ (Var2[2] >> 40u);
	Var124[3] = ((Var2[4] & 0xfffffffu) << 24u) ^ (Var2[3] >> 40u);
	Var124[4] = 0u;
	Var123 = Var124[0] & 0xffu;
	Var125 = Var0[Var123] + 40;
	Var1 = Var125;
	Var126 = Var1 == 39;
	if (Var126 != 0u)
	{
	Var128[0] = (Var2[1] << 32u) ^ (Var2[0] >> 32u);
	Var128[1] = (Var2[2] << 32u) ^ (Var2[1] >> 32u);
	Var128[2] = (Var2[3] << 32u) ^ (Var2[2] >> 32u);
	Var128[3] = ((Var2[4] & 0xfffffffu) << 32u) ^ (Var2[3] >> 32u);
	Var128[4] = 0u;
	Var127 = Var128[0] & 0xffu;
	Var129 = Var0[Var127] + 32;
	Var1 = Var129;
	Var130 = Var1 == 31;
	if (Var130 != 0u)
	{
	Var132[0] = (Var2[1] << 40u) ^ (Var2[0] >> 24u);
	Var132[1] = (Var2[2] << 40u) ^ (Var2[1] >> 24u);
	Var132[2] = (Var2[3] << 40u) ^ (Var2[2] >> 24u);
	Var132[3] = (Var2[4] << 40u) ^ (Var2[3] >> 24u);
	Var132[4] = (Var2[4] & 0xfffffffu) >> 24u;
	Var131 = Var132[0] & 0xffu;
	Var133 = Var0[Var131] + 24;
	Var1 = Var133;
	Var134 = Var1 == 23;
	if (Var134 != 0u)
	{
	Var136[0] = (Var2[1] << 48u) ^ (Var2[0] >> 16u);
	Var136[1] = (Var2[2] << 48u) ^ (Var2[1] >> 16u);
	Var136[2] = (Var2[3] << 48u) ^ (Var2[2] >> 16u);
	Var136[3] = (Var2[4] << 48u) ^ (Var2[3] >> 16u);
	Var136[4] = (Var2[4] & 0xfffffffu) >> 16u;
	Var135 = Var136[0] & 0xffu;
	Var137 = Var0[Var135] + 16;
	Var1 = Var137;
	Var138 = Var1 == 15;
	if (Var138 != 0u)
	{
	Var140[0] = (Var2[1] << 56u) ^ (Var2[0] >> 8u);
	Var140[1] = (Var2[2] << 56u) ^ (Var2[1] >> 8u);
	Var140[2] = (Var2[3] << 56u) ^ (Var2[2] >> 8u);
	Var140[3] = (Var2[4] << 56u) ^ (Var2[3] >> 8u);
	Var140[4] = (Var2[4] & 0xfffffffu) >> 8u;
	Var139 = Var140[0] & 0xffu;
	Var141 = Var0[Var139] + 8;
	Var1 = Var141;
	Var142 = Var1 == 7;
	if (Var142 != 0u)
	{
	Var143 = Var2[0] & 0xffu;
	Var144 = Var0[Var143] + 0;
	Var1 = Var144;
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
	}
	}
	}
	}
	}
	}
	*Out0 = Var1;
}
