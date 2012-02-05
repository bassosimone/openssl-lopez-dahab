#include <stdint.h>
#include "combx3_571.h"


void kar3_571_64(uint64_t Out0[18], const uint64_t In0[9], const uint64_t In1[9])
{
	uint64_t Var0[5];
	uint64_t Var1[9];
	uint64_t Var2[5];
	uint64_t Var3[5];
	uint64_t Var4[9];
	uint64_t Var5[5];
	uint64_t Var6[9];
	uint64_t Var7[9];
	uint64_t Var8[9];
	uint64_t Var9[5];
	uint64_t Var10[5];
	uint64_t Var11[18];
	uint64_t Var12[18];
	uint64_t Var13[18];
	uint64_t Var14[9];
	uint64_t Var15[9];
	uint64_t Var16[18];
	uint64_t Var17[18];
	uint64_t Var18[18];
	uint64_t Var19[18];

	Var0[0] = 0u;
	Var0[1] = 0u;
	Var0[2] = 0u;
	Var0[3] = 0u;
	Var0[4] = 0u;
	Var1[0] = (In0[5] << 34u) ^ (In0[4] >> 30u);
	Var1[1] = (In0[6] << 34u) ^ (In0[5] >> 30u);
	Var1[2] = (In0[7] << 34u) ^ (In0[6] >> 30u);
	Var1[3] = (In0[8] << 34u) ^ (In0[7] >> 30u);
	Var1[4] = (In0[8] & 0x7ffffffffffffffu) >> 30u;
	Var1[5] = 0u;
	Var1[6] = 0u;
	Var1[7] = 0u;
	Var1[8] = 0u;
	Var0[0] = Var1[0];
	Var0[1] = Var1[1];
	Var0[2] = Var1[2];
	Var0[3] = Var1[3];
	Var0[4] = Var1[4];
	Var2[0] = 0u;
	Var2[1] = 0u;
	Var2[2] = 0u;
	Var2[3] = 0u;
	Var2[4] = 0u;
	Var2[0] = In0[0];
	Var2[1] = In0[1];
	Var2[2] = In0[2];
	Var2[3] = In0[3];
	Var2[4] = In0[4];
	Var3[0] = 0u;
	Var3[1] = 0u;
	Var3[2] = 0u;
	Var3[3] = 0u;
	Var3[4] = 0u;
	Var4[0] = (In1[5] << 34u) ^ (In1[4] >> 30u);
	Var4[1] = (In1[6] << 34u) ^ (In1[5] >> 30u);
	Var4[2] = (In1[7] << 34u) ^ (In1[6] >> 30u);
	Var4[3] = (In1[8] << 34u) ^ (In1[7] >> 30u);
	Var4[4] = (In1[8] & 0x7ffffffffffffffu) >> 30u;
	Var4[5] = 0u;
	Var4[6] = 0u;
	Var4[7] = 0u;
	Var4[8] = 0u;
	Var3[0] = Var4[0];
	Var3[1] = Var4[1];
	Var3[2] = Var4[2];
	Var3[3] = Var4[3];
	Var3[4] = Var4[4];
	Var5[0] = 0u;
	Var5[1] = 0u;
	Var5[2] = 0u;
	Var5[3] = 0u;
	Var5[4] = 0u;
	Var5[0] = In1[0];
	Var5[1] = In1[1];
	Var5[2] = In1[2];
	Var5[3] = In1[3];
	Var5[4] = In1[4];
	combx3_571_64(Var6, Var0, Var3);
	combx3_571_64(Var7, Var2, Var5);
	Var9[0] = Var3[0] ^ Var5[0];
	Var9[1] = Var3[1] ^ Var5[1];
	Var9[2] = Var3[2] ^ Var5[2];
	Var9[3] = Var3[3] ^ Var5[3];
	Var9[4] = Var3[4] ^ Var5[4];
	Var10[0] = Var0[0] ^ Var2[0];
	Var10[1] = Var0[1] ^ Var2[1];
	Var10[2] = Var0[2] ^ Var2[2];
	Var10[3] = Var0[3] ^ Var2[3];
	Var10[4] = Var0[4] ^ Var2[4];
	combx3_571_64(Var8, Var10, Var9);
	Var11[0] = 0u;
	Var11[1] = 0u;
	Var11[2] = 0u;
	Var11[3] = 0u;
	Var11[4] = 0u;
	Var11[5] = 0u;
	Var11[6] = 0u;
	Var11[7] = 0u;
	Var11[8] = 0u;
	Var11[9] = 0u;
	Var11[10] = 0u;
	Var11[11] = 0u;
	Var11[12] = 0u;
	Var11[13] = 0u;
	Var11[14] = 0u;
	Var11[15] = 0u;
	Var11[16] = 0u;
	Var11[17] = 0u;
	Var11[0] = Var6[0];
	Var11[1] = Var6[1];
	Var11[2] = Var6[2];
	Var11[3] = Var6[3];
	Var11[4] = Var6[4];
	Var11[5] = Var6[5];
	Var11[6] = Var6[6];
	Var11[7] = Var6[7];
	Var11[8] = (Var6[8] & 0x7ffffffffffffffu) ^ (Var11[8] & 0xf800000000000000u);
	Var12[17] = (Var11[9] << 60u) ^ (Var11[8] >> 4u);
	Var12[16] = (Var11[8] << 60u) ^ (Var11[7] >> 4u);
	Var12[15] = (Var11[7] << 60u) ^ (Var11[6] >> 4u);
	Var12[14] = (Var11[6] << 60u) ^ (Var11[5] >> 4u);
	Var12[13] = (Var11[5] << 60u) ^ (Var11[4] >> 4u);
	Var12[12] = (Var11[4] << 60u) ^ (Var11[3] >> 4u);
	Var12[11] = (Var11[3] << 60u) ^ (Var11[2] >> 4u);
	Var12[10] = (Var11[2] << 60u) ^ (Var11[1] >> 4u);
	Var12[9] = (Var11[1] << 60u) ^ (Var11[0] >> 4u);
	Var12[8] = Var11[0] << 60u;
	Var12[7] = 0u;
	Var12[6] = 0u;
	Var12[5] = 0u;
	Var12[4] = 0u;
	Var12[3] = 0u;
	Var12[2] = 0u;
	Var12[1] = 0u;
	Var12[0] = 0u;
	Var11[0] = Var12[0];
	Var11[1] = Var12[1];
	Var11[2] = Var12[2];
	Var11[3] = Var12[3];
	Var11[4] = Var12[4];
	Var11[5] = Var12[5];
	Var11[6] = Var12[6];
	Var11[7] = Var12[7];
	Var11[8] = Var12[8];
	Var11[9] = Var12[9];
	Var11[10] = Var12[10];
	Var11[11] = Var12[11];
	Var11[12] = Var12[12];
	Var11[13] = Var12[13];
	Var11[14] = Var12[14];
	Var11[15] = Var12[15];
	Var11[16] = Var12[16];
	Var11[17] = Var12[17];
	Var13[0] = 0u;
	Var13[1] = 0u;
	Var13[2] = 0u;
	Var13[3] = 0u;
	Var13[4] = 0u;
	Var13[5] = 0u;
	Var13[6] = 0u;
	Var13[7] = 0u;
	Var13[8] = 0u;
	Var13[9] = 0u;
	Var13[10] = 0u;
	Var13[11] = 0u;
	Var13[12] = 0u;
	Var13[13] = 0u;
	Var13[14] = 0u;
	Var13[15] = 0u;
	Var13[16] = 0u;
	Var13[17] = 0u;
	Var14[0] = Var8[0] ^ Var6[0];
	Var14[1] = Var8[1] ^ Var6[1];
	Var14[2] = Var8[2] ^ Var6[2];
	Var14[3] = Var8[3] ^ Var6[3];
	Var14[4] = Var8[4] ^ Var6[4];
	Var14[5] = Var8[5] ^ Var6[5];
	Var14[6] = Var8[6] ^ Var6[6];
	Var14[7] = Var8[7] ^ Var6[7];
	Var14[8] = Var8[8] ^ Var6[8];
	Var15[0] = Var14[0] ^ Var7[0];
	Var15[1] = Var14[1] ^ Var7[1];
	Var15[2] = Var14[2] ^ Var7[2];
	Var15[3] = Var14[3] ^ Var7[3];
	Var15[4] = Var14[4] ^ Var7[4];
	Var15[5] = Var14[5] ^ Var7[5];
	Var15[6] = Var14[6] ^ Var7[6];
	Var15[7] = Var14[7] ^ Var7[7];
	Var15[8] = Var14[8] ^ Var7[8];
	Var13[0] = Var15[0];
	Var13[1] = Var15[1];
	Var13[2] = Var15[2];
	Var13[3] = Var15[3];
	Var13[4] = Var15[4];
	Var13[5] = Var15[5];
	Var13[6] = Var15[6];
	Var13[7] = Var15[7];
	Var13[8] = (Var15[8] & 0x7ffffffffffffffu) ^ (Var13[8] & 0xf800000000000000u);
	Var16[17] = (Var13[13] << 30u) ^ (Var13[12] >> 34u);
	Var16[16] = (Var13[12] << 30u) ^ (Var13[11] >> 34u);
	Var16[15] = (Var13[11] << 30u) ^ (Var13[10] >> 34u);
	Var16[14] = (Var13[10] << 30u) ^ (Var13[9] >> 34u);
	Var16[13] = (Var13[9] << 30u) ^ (Var13[8] >> 34u);
	Var16[12] = (Var13[8] << 30u) ^ (Var13[7] >> 34u);
	Var16[11] = (Var13[7] << 30u) ^ (Var13[6] >> 34u);
	Var16[10] = (Var13[6] << 30u) ^ (Var13[5] >> 34u);
	Var16[9] = (Var13[5] << 30u) ^ (Var13[4] >> 34u);
	Var16[8] = (Var13[4] << 30u) ^ (Var13[3] >> 34u);
	Var16[7] = (Var13[3] << 30u) ^ (Var13[2] >> 34u);
	Var16[6] = (Var13[2] << 30u) ^ (Var13[1] >> 34u);
	Var16[5] = (Var13[1] << 30u) ^ (Var13[0] >> 34u);
	Var16[4] = Var13[0] << 30u;
	Var16[3] = 0u;
	Var16[2] = 0u;
	Var16[1] = 0u;
	Var16[0] = 0u;
	Var13[0] = Var16[0];
	Var13[1] = Var16[1];
	Var13[2] = Var16[2];
	Var13[3] = Var16[3];
	Var13[4] = Var16[4];
	Var13[5] = Var16[5];
	Var13[6] = Var16[6];
	Var13[7] = Var16[7];
	Var13[8] = Var16[8];
	Var13[9] = Var16[9];
	Var13[10] = Var16[10];
	Var13[11] = Var16[11];
	Var13[12] = Var16[12];
	Var13[13] = Var16[13];
	Var13[14] = Var16[14];
	Var13[15] = Var16[15];
	Var13[16] = Var16[16];
	Var13[17] = Var16[17];
	Var17[0] = 0u;
	Var17[1] = 0u;
	Var17[2] = 0u;
	Var17[3] = 0u;
	Var17[4] = 0u;
	Var17[5] = 0u;
	Var17[6] = 0u;
	Var17[7] = 0u;
	Var17[8] = 0u;
	Var17[9] = 0u;
	Var17[10] = 0u;
	Var17[11] = 0u;
	Var17[12] = 0u;
	Var17[13] = 0u;
	Var17[14] = 0u;
	Var17[15] = 0u;
	Var17[16] = 0u;
	Var17[17] = 0u;
	Var17[0] = Var7[0];
	Var17[1] = Var7[1];
	Var17[2] = Var7[2];
	Var17[3] = Var7[3];
	Var17[4] = Var7[4];
	Var17[5] = Var7[5];
	Var17[6] = Var7[6];
	Var17[7] = Var7[7];
	Var17[8] = (Var7[8] & 0x7ffffffffffffffu) ^ (Var17[8] & 0xf800000000000000u);
	Var18[0] = Var11[0] ^ Var13[0];
	Var18[1] = Var11[1] ^ Var13[1];
	Var18[2] = Var11[2] ^ Var13[2];
	Var18[3] = Var11[3] ^ Var13[3];
	Var18[4] = Var11[4] ^ Var13[4];
	Var18[5] = Var11[5] ^ Var13[5];
	Var18[6] = Var11[6] ^ Var13[6];
	Var18[7] = Var11[7] ^ Var13[7];
	Var18[8] = Var11[8] ^ Var13[8];
	Var18[9] = Var11[9] ^ Var13[9];
	Var18[10] = Var11[10] ^ Var13[10];
	Var18[11] = Var11[11] ^ Var13[11];
	Var18[12] = Var11[12] ^ Var13[12];
	Var18[13] = Var11[13] ^ Var13[13];
	Var18[14] = Var11[14] ^ Var13[14];
	Var18[15] = Var11[15] ^ Var13[15];
	Var18[16] = Var11[16] ^ Var13[16];
	Var18[17] = Var11[17] ^ Var13[17];
	Var19[0] = Var18[0] ^ Var17[0];
	Var19[1] = Var18[1] ^ Var17[1];
	Var19[2] = Var18[2] ^ Var17[2];
	Var19[3] = Var18[3] ^ Var17[3];
	Var19[4] = Var18[4] ^ Var17[4];
	Var19[5] = Var18[5] ^ Var17[5];
	Var19[6] = Var18[6] ^ Var17[6];
	Var19[7] = Var18[7] ^ Var17[7];
	Var19[8] = Var18[8] ^ Var17[8];
	Var19[9] = Var18[9] ^ Var17[9];
	Var19[10] = Var18[10] ^ Var17[10];
	Var19[11] = Var18[11] ^ Var17[11];
	Var19[12] = Var18[12] ^ Var17[12];
	Var19[13] = Var18[13] ^ Var17[13];
	Var19[14] = Var18[14] ^ Var17[14];
	Var19[15] = Var18[15] ^ Var17[15];
	Var19[16] = Var18[16] ^ Var17[16];
	Var19[17] = Var18[17] ^ Var17[17];
	Out0[0] = Var19[0];
	Out0[1] = Var19[1];
	Out0[2] = Var19[2];
	Out0[3] = Var19[3];
	Out0[4] = Var19[4];
	Out0[5] = Var19[5];
	Out0[6] = Var19[6];
	Out0[7] = Var19[7];
	Out0[8] = Var19[8];
	Out0[9] = Var19[9];
	Out0[10] = Var19[10];
	Out0[11] = Var19[11];
	Out0[12] = Var19[12];
	Out0[13] = Var19[13];
	Out0[14] = Var19[14];
	Out0[15] = Var19[15];
	Out0[16] = Var19[16];
	Out0[17] = Var19[17];
}
