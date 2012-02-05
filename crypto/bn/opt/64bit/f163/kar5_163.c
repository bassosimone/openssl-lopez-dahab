#include <stdint.h>
#include "combx5_163.h"


void kar5_163_64(uint64_t Out0[6], const uint64_t In0[3], const uint64_t In1[3])
{
	uint64_t Var0[2];
	uint64_t Var1[3];
	uint64_t Var2[2];
	uint64_t Var3[2];
	uint64_t Var4[3];
	uint64_t Var5[2];
	uint64_t Var6[3];
	uint64_t Var7[3];
	uint64_t Var8[3];
	uint64_t Var9[2];
	uint64_t Var10[2];
	uint64_t Var11[6];
	uint64_t Var12[6];
	uint64_t Var13[6];
	uint64_t Var14[3];
	uint64_t Var15[3];
	uint64_t Var16[6];
	uint64_t Var17[6];
	uint64_t Var18[6];
	uint64_t Var19[6];

	Var0[0] = 0u;
	Var0[1] = 0u;
	Var1[0] = (In0[2] << 46u) ^ (In0[1] >> 18u);
	Var1[1] = (In0[2] & 0x7ffffffffu) >> 18u;
	Var1[2] = 0u;
	Var0[0] = Var1[0];
	Var0[1] = Var1[1];
	Var2[0] = 0u;
	Var2[1] = 0u;
	Var2[0] = In0[0];
	Var2[1] = In0[1];
	Var3[0] = 0u;
	Var3[1] = 0u;
	Var4[0] = (In1[2] << 46u) ^ (In1[1] >> 18u);
	Var4[1] = (In1[2] & 0x7ffffffffu) >> 18u;
	Var4[2] = 0u;
	Var3[0] = Var4[0];
	Var3[1] = Var4[1];
	Var5[0] = 0u;
	Var5[1] = 0u;
	Var5[0] = In1[0];
	Var5[1] = In1[1];
	combx5_163_64(Var6, Var0, Var3);
	combx5_163_64(Var7, Var2, Var5);
	Var9[0] = Var3[0] ^ Var5[0];
	Var9[1] = Var3[1] ^ Var5[1];
	Var10[0] = Var0[0] ^ Var2[0];
	Var10[1] = Var0[1] ^ Var2[1];
	combx5_163_64(Var8, Var10, Var9);
	Var11[0] = 0u;
	Var11[1] = 0u;
	Var11[2] = 0u;
	Var11[3] = 0u;
	Var11[4] = 0u;
	Var11[5] = 0u;
	Var11[0] = Var6[0];
	Var11[1] = Var6[1];
	Var11[2] = (Var6[2] & 0x7ffffffffu) ^ (Var11[2] & 0xfffffff800000000u);
	Var12[5] = (Var11[3] << 36u) ^ (Var11[2] >> 28u);
	Var12[4] = (Var11[2] << 36u) ^ (Var11[1] >> 28u);
	Var12[3] = (Var11[1] << 36u) ^ (Var11[0] >> 28u);
	Var12[2] = Var11[0] << 36u;
	Var12[1] = 0u;
	Var12[0] = 0u;
	Var11[0] = Var12[0];
	Var11[1] = Var12[1];
	Var11[2] = Var12[2];
	Var11[3] = Var12[3];
	Var11[4] = Var12[4];
	Var11[5] = Var12[5];
	Var13[0] = 0u;
	Var13[1] = 0u;
	Var13[2] = 0u;
	Var13[3] = 0u;
	Var13[4] = 0u;
	Var13[5] = 0u;
	Var14[0] = Var8[0] ^ Var6[0];
	Var14[1] = Var8[1] ^ Var6[1];
	Var14[2] = Var8[2] ^ Var6[2];
	Var15[0] = Var14[0] ^ Var7[0];
	Var15[1] = Var14[1] ^ Var7[1];
	Var15[2] = Var14[2] ^ Var7[2];
	Var13[0] = Var15[0];
	Var13[1] = Var15[1];
	Var13[2] = (Var15[2] & 0x7ffffffffu) ^ (Var13[2] & 0xfffffff800000000u);
	Var16[5] = (Var13[4] << 18u) ^ (Var13[3] >> 46u);
	Var16[4] = (Var13[3] << 18u) ^ (Var13[2] >> 46u);
	Var16[3] = (Var13[2] << 18u) ^ (Var13[1] >> 46u);
	Var16[2] = (Var13[1] << 18u) ^ (Var13[0] >> 46u);
	Var16[1] = Var13[0] << 18u;
	Var16[0] = 0u;
	Var13[0] = Var16[0];
	Var13[1] = Var16[1];
	Var13[2] = Var16[2];
	Var13[3] = Var16[3];
	Var13[4] = Var16[4];
	Var13[5] = Var16[5];
	Var17[0] = 0u;
	Var17[1] = 0u;
	Var17[2] = 0u;
	Var17[3] = 0u;
	Var17[4] = 0u;
	Var17[5] = 0u;
	Var17[0] = Var7[0];
	Var17[1] = Var7[1];
	Var17[2] = (Var7[2] & 0x7ffffffffu) ^ (Var17[2] & 0xfffffff800000000u);
	Var18[0] = Var11[0] ^ Var13[0];
	Var18[1] = Var11[1] ^ Var13[1];
	Var18[2] = Var11[2] ^ Var13[2];
	Var18[3] = Var11[3] ^ Var13[3];
	Var18[4] = Var11[4] ^ Var13[4];
	Var18[5] = Var11[5] ^ Var13[5];
	Var19[0] = Var18[0] ^ Var17[0];
	Var19[1] = Var18[1] ^ Var17[1];
	Var19[2] = Var18[2] ^ Var17[2];
	Var19[3] = Var18[3] ^ Var17[3];
	Var19[4] = Var18[4] ^ Var17[4];
	Var19[5] = Var18[5] ^ Var17[5];
	Out0[0] = Var19[0];
	Out0[1] = Var19[1];
	Out0[2] = Var19[2];
	Out0[3] = Var19[3];
	Out0[4] = Var19[4];
	Out0[5] = Var19[5];
}
