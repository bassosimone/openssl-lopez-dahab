#include <stdint.h>
#include "combx5_163.h"


void kar5_163_32(uint32_t Out0[11], const uint32_t In0[6], const uint32_t In1[6])
{
	uint32_t Var0[3];
	uint32_t Var1[6];
	uint32_t Var2[3];
	uint32_t Var3[3];
	uint32_t Var4[6];
	uint32_t Var5[3];
	uint32_t Var6[6];
	uint32_t Var7[6];
	uint32_t Var8[6];
	uint32_t Var9[3];
	uint32_t Var10[3];
	uint32_t Var11[11];
	uint32_t Var12[11];
	uint32_t Var13[11];
	uint32_t Var14[6];
	uint32_t Var15[6];
	uint32_t Var16[11];
	uint32_t Var17[11];
	uint32_t Var18[11];
	uint32_t Var19[11];

	Var0[0] = 0u;
	Var0[1] = 0u;
	Var0[2] = 0u;
	Var1[0] = (In0[3] << 14u) ^ (In0[2] >> 18u);
	Var1[1] = (In0[4] << 14u) ^ (In0[3] >> 18u);
	Var1[2] = ((In0[5] & 0x7u) << 14u) ^ (In0[4] >> 18u);
	Var1[3] = 0u;
	Var1[4] = 0u;
	Var1[5] = 0u;
	Var0[0] = Var1[0];
	Var0[1] = Var1[1];
	Var0[2] = Var1[2];
	Var2[0] = 0u;
	Var2[1] = 0u;
	Var2[2] = 0u;
	Var2[0] = In0[0];
	Var2[1] = In0[1];
	Var2[2] = In0[2];
	Var3[0] = 0u;
	Var3[1] = 0u;
	Var3[2] = 0u;
	Var4[0] = (In1[3] << 14u) ^ (In1[2] >> 18u);
	Var4[1] = (In1[4] << 14u) ^ (In1[3] >> 18u);
	Var4[2] = ((In1[5] & 0x7u) << 14u) ^ (In1[4] >> 18u);
	Var4[3] = 0u;
	Var4[4] = 0u;
	Var4[5] = 0u;
	Var3[0] = Var4[0];
	Var3[1] = Var4[1];
	Var3[2] = Var4[2];
	Var5[0] = 0u;
	Var5[1] = 0u;
	Var5[2] = 0u;
	Var5[0] = In1[0];
	Var5[1] = In1[1];
	Var5[2] = In1[2];
	combx5_163_32(Var6, Var0, Var3);
	combx5_163_32(Var7, Var2, Var5);
	Var9[0] = Var3[0] ^ Var5[0];
	Var9[1] = Var3[1] ^ Var5[1];
	Var9[2] = Var3[2] ^ Var5[2];
	Var10[0] = Var0[0] ^ Var2[0];
	Var10[1] = Var0[1] ^ Var2[1];
	Var10[2] = Var0[2] ^ Var2[2];
	combx5_163_32(Var8, Var10, Var9);
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
	Var11[0] = Var6[0];
	Var11[1] = Var6[1];
	Var11[2] = Var6[2];
	Var11[3] = Var6[3];
	Var11[4] = Var6[4];
	Var11[5] = (Var6[5] & 0x7u) ^ (Var11[5] & 0xfffffff8u);
	Var12[10] = (Var11[5] << 4u) ^ (Var11[4] >> 28u);
	Var12[9] = (Var11[4] << 4u) ^ (Var11[3] >> 28u);
	Var12[8] = (Var11[3] << 4u) ^ (Var11[2] >> 28u);
	Var12[7] = (Var11[2] << 4u) ^ (Var11[1] >> 28u);
	Var12[6] = (Var11[1] << 4u) ^ (Var11[0] >> 28u);
	Var12[5] = Var11[0] << 4u;
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
	Var14[0] = Var8[0] ^ Var6[0];
	Var14[1] = Var8[1] ^ Var6[1];
	Var14[2] = Var8[2] ^ Var6[2];
	Var14[3] = Var8[3] ^ Var6[3];
	Var14[4] = Var8[4] ^ Var6[4];
	Var14[5] = Var8[5] ^ Var6[5];
	Var15[0] = Var14[0] ^ Var7[0];
	Var15[1] = Var14[1] ^ Var7[1];
	Var15[2] = Var14[2] ^ Var7[2];
	Var15[3] = Var14[3] ^ Var7[3];
	Var15[4] = Var14[4] ^ Var7[4];
	Var15[5] = Var14[5] ^ Var7[5];
	Var13[0] = Var15[0];
	Var13[1] = Var15[1];
	Var13[2] = Var15[2];
	Var13[3] = Var15[3];
	Var13[4] = Var15[4];
	Var13[5] = (Var15[5] & 0x7u) ^ (Var13[5] & 0xfffffff8u);
	Var16[10] = (Var13[8] << 18u) ^ (Var13[7] >> 14u);
	Var16[9] = (Var13[7] << 18u) ^ (Var13[6] >> 14u);
	Var16[8] = (Var13[6] << 18u) ^ (Var13[5] >> 14u);
	Var16[7] = (Var13[5] << 18u) ^ (Var13[4] >> 14u);
	Var16[6] = (Var13[4] << 18u) ^ (Var13[3] >> 14u);
	Var16[5] = (Var13[3] << 18u) ^ (Var13[2] >> 14u);
	Var16[4] = (Var13[2] << 18u) ^ (Var13[1] >> 14u);
	Var16[3] = (Var13[1] << 18u) ^ (Var13[0] >> 14u);
	Var16[2] = Var13[0] << 18u;
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
	Var17[0] = Var7[0];
	Var17[1] = Var7[1];
	Var17[2] = Var7[2];
	Var17[3] = Var7[3];
	Var17[4] = Var7[4];
	Var17[5] = (Var7[5] & 0x7u) ^ (Var17[5] & 0xfffffff8u);
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
}
