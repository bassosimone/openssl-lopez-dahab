#include <stdint.h>
void mod_283_32(uint32_t Out0[9], const uint32_t In0[18])
{
	uint32_t Var0[18];
	uint32_t Var1[18];
	uint32_t Var2[9];
	uint32_t Var3[18];
	uint32_t Var4[18];
	uint32_t Var5[18];
	uint32_t Var6[18];
	uint32_t Var7[18];
	uint32_t Var8[18];
	uint32_t Var9[18];
	uint32_t Var10[18];
	uint32_t Var11[18];
	uint32_t Var12[18];

	Var2[0] = In0[0];
	Var2[1] = In0[1];
	Var2[2] = In0[2];
	Var2[3] = In0[3];
	Var2[4] = In0[4];
	Var2[5] = In0[5];
	Var2[6] = In0[6];
	Var2[7] = In0[7];
	Var2[8] = In0[8];
	Var0[0] = 0u;
	Var0[1] = 0u;
	Var0[2] = 0u;
	Var0[3] = 0u;
	Var0[4] = 0u;
	Var0[5] = 0u;
	Var0[6] = 0u;
	Var0[7] = 0u;
	Var0[8] = 0u;
	Var0[9] = 0u;
	Var0[10] = 0u;
	Var0[11] = 0u;
	Var0[12] = 0u;
	Var0[13] = 0u;
	Var0[14] = 0u;
	Var0[15] = 0u;
	Var0[16] = 0u;
	Var0[17] = 0u;
	Var0[0] = Var2[0];
	Var0[1] = Var2[1];
	Var0[2] = Var2[2];
	Var0[3] = Var2[3];
	Var0[4] = Var2[4];
	Var0[5] = Var2[5];
	Var0[6] = Var2[6];
	Var0[7] = Var2[7];
	Var0[8] = (Var2[8] & 0x7ffffffu) ^ (Var0[8] & 0xf8000000u);
	Var3[0] = (In0[9] << 5u) ^ (In0[8] >> 27u);
	Var3[1] = (In0[10] << 5u) ^ (In0[9] >> 27u);
	Var3[2] = (In0[11] << 5u) ^ (In0[10] >> 27u);
	Var3[3] = (In0[12] << 5u) ^ (In0[11] >> 27u);
	Var3[4] = (In0[13] << 5u) ^ (In0[12] >> 27u);
	Var3[5] = (In0[14] << 5u) ^ (In0[13] >> 27u);
	Var3[6] = (In0[15] << 5u) ^ (In0[14] >> 27u);
	Var3[7] = (In0[16] << 5u) ^ (In0[15] >> 27u);
	Var3[8] = ((In0[17] & 0x1fffffu) << 5u) ^ (In0[16] >> 27u);
	Var3[9] = 0u;
	Var3[10] = 0u;
	Var3[11] = 0u;
	Var3[12] = 0u;
	Var3[13] = 0u;
	Var3[14] = 0u;
	Var3[15] = 0u;
	Var3[16] = 0u;
	Var3[17] = 0u;
	Var4[17] = (Var3[15] << 10u) ^ (Var3[14] >> 22u);
	Var4[16] = (Var3[14] << 10u) ^ (Var3[13] >> 22u);
	Var4[15] = (Var3[13] << 10u) ^ (Var3[12] >> 22u);
	Var4[14] = (Var3[12] << 10u) ^ (Var3[11] >> 22u);
	Var4[13] = (Var3[11] << 10u) ^ (Var3[10] >> 22u);
	Var4[12] = (Var3[10] << 10u) ^ (Var3[9] >> 22u);
	Var4[11] = (Var3[9] << 10u) ^ (Var3[8] >> 22u);
	Var4[10] = (Var3[8] << 10u) ^ (Var3[7] >> 22u);
	Var4[9] = (Var3[7] << 10u) ^ (Var3[6] >> 22u);
	Var4[8] = (Var3[6] << 10u) ^ (Var3[5] >> 22u);
	Var4[7] = (Var3[5] << 10u) ^ (Var3[4] >> 22u);
	Var4[6] = (Var3[4] << 10u) ^ (Var3[3] >> 22u);
	Var4[5] = (Var3[3] << 10u) ^ (Var3[2] >> 22u);
	Var4[4] = (Var3[2] << 10u) ^ (Var3[1] >> 22u);
	Var4[3] = (Var3[1] << 10u) ^ (Var3[0] >> 22u);
	Var4[2] = Var3[0] << 10u;
	Var4[1] = 0u;
	Var4[0] = 0u;
	Var5[0] = Var0[0] ^ Var4[0];
	Var5[1] = Var0[1] ^ Var4[1];
	Var5[2] = Var0[2] ^ Var4[2];
	Var5[3] = Var0[3] ^ Var4[3];
	Var5[4] = Var0[4] ^ Var4[4];
	Var5[5] = Var0[5] ^ Var4[5];
	Var5[6] = Var0[6] ^ Var4[6];
	Var5[7] = Var0[7] ^ Var4[7];
	Var5[8] = Var0[8] ^ Var4[8];
	Var5[9] = Var0[9] ^ Var4[9];
	Var5[10] = Var0[10] ^ Var4[10];
	Var5[11] = Var0[11] ^ Var4[11];
	Var5[12] = Var0[12] ^ Var4[12];
	Var5[13] = Var0[13] ^ Var4[13];
	Var5[14] = Var0[14] ^ Var4[14];
	Var5[15] = Var0[15] ^ Var4[15];
	Var5[16] = Var0[16] ^ Var4[16];
	Var5[17] = Var0[17] ^ Var4[17];
	Var0[0] = Var5[0];
	Var0[1] = Var5[1];
	Var0[2] = Var5[2];
	Var0[3] = Var5[3];
	Var0[4] = Var5[4];
	Var0[5] = Var5[5];
	Var0[6] = Var5[6];
	Var0[7] = Var5[7];
	Var0[8] = Var5[8];
	Var0[9] = Var5[9];
	Var0[10] = Var5[10];
	Var0[11] = Var5[11];
	Var0[12] = Var5[12];
	Var0[13] = Var5[13];
	Var0[14] = Var5[14];
	Var0[15] = Var5[15];
	Var0[16] = Var5[16];
	Var0[17] = Var5[17];
	Var6[0] = (In0[9] << 5u) ^ (In0[8] >> 27u);
	Var6[1] = (In0[10] << 5u) ^ (In0[9] >> 27u);
	Var6[2] = (In0[11] << 5u) ^ (In0[10] >> 27u);
	Var6[3] = (In0[12] << 5u) ^ (In0[11] >> 27u);
	Var6[4] = (In0[13] << 5u) ^ (In0[12] >> 27u);
	Var6[5] = (In0[14] << 5u) ^ (In0[13] >> 27u);
	Var6[6] = (In0[15] << 5u) ^ (In0[14] >> 27u);
	Var6[7] = (In0[16] << 5u) ^ (In0[15] >> 27u);
	Var6[8] = ((In0[17] & 0x1fffffu) << 5u) ^ (In0[16] >> 27u);
	Var6[9] = 0u;
	Var6[10] = 0u;
	Var6[11] = 0u;
	Var6[12] = 0u;
	Var6[13] = 0u;
	Var6[14] = 0u;
	Var6[15] = 0u;
	Var6[16] = 0u;
	Var6[17] = 0u;
	Var7[0] = Var0[0] ^ Var6[0];
	Var7[1] = Var0[1] ^ Var6[1];
	Var7[2] = Var0[2] ^ Var6[2];
	Var7[3] = Var0[3] ^ Var6[3];
	Var7[4] = Var0[4] ^ Var6[4];
	Var7[5] = Var0[5] ^ Var6[5];
	Var7[6] = Var0[6] ^ Var6[6];
	Var7[7] = Var0[7] ^ Var6[7];
	Var7[8] = Var0[8] ^ Var6[8];
	Var7[9] = Var0[9] ^ Var6[9];
	Var7[10] = Var0[10] ^ Var6[10];
	Var7[11] = Var0[11] ^ Var6[11];
	Var7[12] = Var0[12] ^ Var6[12];
	Var7[13] = Var0[13] ^ Var6[13];
	Var7[14] = Var0[14] ^ Var6[14];
	Var7[15] = Var0[15] ^ Var6[15];
	Var7[16] = Var0[16] ^ Var6[16];
	Var7[17] = Var0[17] ^ Var6[17];
	Var0[0] = Var7[0];
	Var0[1] = Var7[1];
	Var0[2] = Var7[2];
	Var0[3] = Var7[3];
	Var0[4] = Var7[4];
	Var0[5] = Var7[5];
	Var0[6] = Var7[6];
	Var0[7] = Var7[7];
	Var0[8] = Var7[8];
	Var0[9] = Var7[9];
	Var0[10] = Var7[10];
	Var0[11] = Var7[11];
	Var0[12] = Var7[12];
	Var0[13] = Var7[13];
	Var0[14] = Var7[14];
	Var0[15] = Var7[15];
	Var0[16] = Var7[16];
	Var0[17] = Var7[17];
	Var1[0] = Var0[0];
	Var1[1] = Var0[1];
	Var1[2] = Var0[2];
	Var1[3] = Var0[3];
	Var1[4] = Var0[4];
	Var1[5] = Var0[5];
	Var1[6] = Var0[6];
	Var1[7] = Var0[7];
	Var1[8] = Var0[8];
	Var1[9] = Var0[9];
	Var1[10] = Var0[10];
	Var1[11] = Var0[11];
	Var1[12] = Var0[12];
	Var1[13] = Var0[13];
	Var1[14] = Var0[14];
	Var1[15] = Var0[15];
	Var1[16] = Var0[16];
	Var1[17] = Var0[17];
	Var8[0] = (Var0[9] << 5u) ^ (Var0[8] >> 27u);
	Var8[1] = (Var0[10] << 5u) ^ (Var0[9] >> 27u);
	Var8[2] = (Var0[11] << 5u) ^ (Var0[10] >> 27u);
	Var8[3] = (Var0[12] << 5u) ^ (Var0[11] >> 27u);
	Var8[4] = (Var0[13] << 5u) ^ (Var0[12] >> 27u);
	Var8[5] = (Var0[14] << 5u) ^ (Var0[13] >> 27u);
	Var8[6] = (Var0[15] << 5u) ^ (Var0[14] >> 27u);
	Var8[7] = (Var0[16] << 5u) ^ (Var0[15] >> 27u);
	Var8[8] = ((Var0[17] & 0x1fffffu) << 5u) ^ (Var0[16] >> 27u);
	Var8[9] = 0u;
	Var8[10] = 0u;
	Var8[11] = 0u;
	Var8[12] = 0u;
	Var8[13] = 0u;
	Var8[14] = 0u;
	Var8[15] = 0u;
	Var8[16] = 0u;
	Var8[17] = 0u;
	Var9[17] = (Var8[15] << 10u) ^ (Var8[14] >> 22u);
	Var9[16] = (Var8[14] << 10u) ^ (Var8[13] >> 22u);
	Var9[15] = (Var8[13] << 10u) ^ (Var8[12] >> 22u);
	Var9[14] = (Var8[12] << 10u) ^ (Var8[11] >> 22u);
	Var9[13] = (Var8[11] << 10u) ^ (Var8[10] >> 22u);
	Var9[12] = (Var8[10] << 10u) ^ (Var8[9] >> 22u);
	Var9[11] = (Var8[9] << 10u) ^ (Var8[8] >> 22u);
	Var9[10] = (Var8[8] << 10u) ^ (Var8[7] >> 22u);
	Var9[9] = (Var8[7] << 10u) ^ (Var8[6] >> 22u);
	Var9[8] = (Var8[6] << 10u) ^ (Var8[5] >> 22u);
	Var9[7] = (Var8[5] << 10u) ^ (Var8[4] >> 22u);
	Var9[6] = (Var8[4] << 10u) ^ (Var8[3] >> 22u);
	Var9[5] = (Var8[3] << 10u) ^ (Var8[2] >> 22u);
	Var9[4] = (Var8[2] << 10u) ^ (Var8[1] >> 22u);
	Var9[3] = (Var8[1] << 10u) ^ (Var8[0] >> 22u);
	Var9[2] = Var8[0] << 10u;
	Var9[1] = 0u;
	Var9[0] = 0u;
	Var10[0] = Var1[0] ^ Var9[0];
	Var10[1] = Var1[1] ^ Var9[1];
	Var10[2] = Var1[2] ^ Var9[2];
	Var10[3] = Var1[3] ^ Var9[3];
	Var10[4] = Var1[4] ^ Var9[4];
	Var10[5] = Var1[5] ^ Var9[5];
	Var10[6] = Var1[6] ^ Var9[6];
	Var10[7] = Var1[7] ^ Var9[7];
	Var10[8] = Var1[8] ^ Var9[8];
	Var10[9] = Var1[9] ^ Var9[9];
	Var10[10] = Var1[10] ^ Var9[10];
	Var10[11] = Var1[11] ^ Var9[11];
	Var10[12] = Var1[12] ^ Var9[12];
	Var10[13] = Var1[13] ^ Var9[13];
	Var10[14] = Var1[14] ^ Var9[14];
	Var10[15] = Var1[15] ^ Var9[15];
	Var10[16] = Var1[16] ^ Var9[16];
	Var10[17] = Var1[17] ^ Var9[17];
	Var1[0] = Var10[0];
	Var1[1] = Var10[1];
	Var1[2] = Var10[2];
	Var1[3] = Var10[3];
	Var1[4] = Var10[4];
	Var1[5] = Var10[5];
	Var1[6] = Var10[6];
	Var1[7] = Var10[7];
	Var1[8] = Var10[8];
	Var1[9] = Var10[9];
	Var1[10] = Var10[10];
	Var1[11] = Var10[11];
	Var1[12] = Var10[12];
	Var1[13] = Var10[13];
	Var1[14] = Var10[14];
	Var1[15] = Var10[15];
	Var1[16] = Var10[16];
	Var1[17] = Var10[17];
	Var11[0] = (Var0[9] << 5u) ^ (Var0[8] >> 27u);
	Var11[1] = (Var0[10] << 5u) ^ (Var0[9] >> 27u);
	Var11[2] = (Var0[11] << 5u) ^ (Var0[10] >> 27u);
	Var11[3] = (Var0[12] << 5u) ^ (Var0[11] >> 27u);
	Var11[4] = (Var0[13] << 5u) ^ (Var0[12] >> 27u);
	Var11[5] = (Var0[14] << 5u) ^ (Var0[13] >> 27u);
	Var11[6] = (Var0[15] << 5u) ^ (Var0[14] >> 27u);
	Var11[7] = (Var0[16] << 5u) ^ (Var0[15] >> 27u);
	Var11[8] = ((Var0[17] & 0x1fffffu) << 5u) ^ (Var0[16] >> 27u);
	Var11[9] = 0u;
	Var11[10] = 0u;
	Var11[11] = 0u;
	Var11[12] = 0u;
	Var11[13] = 0u;
	Var11[14] = 0u;
	Var11[15] = 0u;
	Var11[16] = 0u;
	Var11[17] = 0u;
	Var12[0] = Var1[0] ^ Var11[0];
	Var12[1] = Var1[1] ^ Var11[1];
	Var12[2] = Var1[2] ^ Var11[2];
	Var12[3] = Var1[3] ^ Var11[3];
	Var12[4] = Var1[4] ^ Var11[4];
	Var12[5] = Var1[5] ^ Var11[5];
	Var12[6] = Var1[6] ^ Var11[6];
	Var12[7] = Var1[7] ^ Var11[7];
	Var12[8] = Var1[8] ^ Var11[8];
	Var12[9] = Var1[9] ^ Var11[9];
	Var12[10] = Var1[10] ^ Var11[10];
	Var12[11] = Var1[11] ^ Var11[11];
	Var12[12] = Var1[12] ^ Var11[12];
	Var12[13] = Var1[13] ^ Var11[13];
	Var12[14] = Var1[14] ^ Var11[14];
	Var12[15] = Var1[15] ^ Var11[15];
	Var12[16] = Var1[16] ^ Var11[16];
	Var12[17] = Var1[17] ^ Var11[17];
	Var1[0] = Var12[0];
	Var1[1] = Var12[1];
	Var1[2] = Var12[2];
	Var1[3] = Var12[3];
	Var1[4] = Var12[4];
	Var1[5] = Var12[5];
	Var1[6] = Var12[6];
	Var1[7] = Var12[7];
	Var1[8] = Var12[8];
	Var1[9] = Var12[9];
	Var1[10] = Var12[10];
	Var1[11] = Var12[11];
	Var1[12] = Var12[12];
	Var1[13] = Var12[13];
	Var1[14] = Var12[14];
	Var1[15] = Var12[15];
	Var1[16] = Var12[16];
	Var1[17] = Var12[17];
	Out0[0] = Var1[0];
	Out0[1] = Var1[1];
	Out0[2] = Var1[2];
	Out0[3] = Var1[3];
	Out0[4] = Var1[4];
	Out0[5] = Var1[5];
	Out0[6] = Var1[6];
	Out0[7] = Var1[7];
	Out0[8] = Var1[8];
}
