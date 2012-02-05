#include <stdint.h>
#include "msb_409.h"


void inv_409_64(uint64_t Out0[7], const uint64_t In0[7])
{
	uint64_t Var0[7];
	uint64_t Var1[7] = { 0x1u, 0x800000u, 0u, 0u, 0u, 0u, 0x1000000u };
	uint64_t Var2[7] = { 0x1u, 0u, 0u, 0u, 0u, 0u, 0u };
	uint64_t Var3[7] = { 0u, 0u, 0u, 0u, 0u, 0u, 0u };
	unsigned int Var4;
	unsigned int Var5;
	int Var6;
	int Var7;
	int Var8;
	int Var9;
	unsigned int Var10;
	uint64_t Var11[7];
	int Var12;
	uint64_t Var13[7];
	uint64_t Var14[7];
	uint64_t Var15[7];
	uint64_t Var16[7];
	unsigned int Var17;

	Var0[0] = 0u;
	Var0[1] = 0u;
	Var0[2] = 0u;
	Var0[3] = 0u;
	Var0[4] = 0u;
	Var0[5] = 0u;
	Var0[6] = 0u;
	Var0[0] = In0[0];
	Var0[1] = In0[1];
	Var0[2] = In0[2];
	Var0[3] = In0[3];
	Var0[4] = In0[4];
	Var0[5] = In0[5];
	Var0[6] = (In0[6] & 0x1ffffffu) ^ (Var0[6] & 0xfffffffffe000000u);
	Var5 = (Var0[0] != 0x1u) || (Var0[1] != 0u) || (Var0[2] != 0u) || (Var0[3] != 0u) || (Var0[4] != 0u) || (Var0[5] != 0u) || ((Var0[6] & 0x3ffffffu) != 0u);
	Var4 = Var5;
	while (Var4 != 0u)
	{
	msb_409_64(&Var6, Var0);
	msb_409_64(&Var7, Var1);
	Var9 = Var6 - Var7;
	Var8 = Var9;
	Var10 = Var8 < 0;
	if (Var10 != 0u)
	{
	Var11[0] = Var0[0];
	Var11[1] = Var0[1];
	Var11[2] = Var0[2];
	Var11[3] = Var0[3];
	Var11[4] = Var0[4];
	Var11[5] = Var0[5];
	Var11[6] = Var0[6];
	Var0[0] = Var1[0];
	Var0[1] = Var1[1];
	Var0[2] = Var1[2];
	Var0[3] = Var1[3];
	Var0[4] = Var1[4];
	Var0[5] = Var1[5];
	Var0[6] = Var1[6];
	Var1[0] = Var11[0];
	Var1[1] = Var11[1];
	Var1[2] = Var11[2];
	Var1[3] = Var11[3];
	Var1[4] = Var11[4];
	Var1[5] = Var11[5];
	Var1[6] = Var11[6];
	Var11[0] = Var2[0];
	Var11[1] = Var2[1];
	Var11[2] = Var2[2];
	Var11[3] = Var2[3];
	Var11[4] = Var2[4];
	Var11[5] = Var2[5];
	Var11[6] = Var2[6];
	Var2[0] = Var3[0];
	Var2[1] = Var3[1];
	Var2[2] = Var3[2];
	Var2[3] = Var3[3];
	Var2[4] = Var3[4];
	Var2[5] = Var3[5];
	Var2[6] = Var3[6];
	Var3[0] = Var11[0];
	Var3[1] = Var11[1];
	Var3[2] = Var11[2];
	Var3[3] = Var11[3];
	Var3[4] = Var11[4];
	Var3[5] = Var11[5];
	Var3[6] = Var11[6];
	Var12 = - Var8;
	Var8 = Var12;
	}
	if (Var8 > 0)
	{
		if (Var8 > 410)
		{
			Var13[6] = 0u;
			Var13[5] = 0u;
			Var13[4] = 0u;
			Var13[3] = 0u;
			Var13[2] = 0u;
			Var13[1] = 0u;
			Var13[0] = 0u;
		}
		else
		{
			if (Var8 % 64u == 0u)
			{
				if (6u < Var8 / 64u)
					Var13[6] = 0u;
				else
					Var13[6] = Var1[6u - (Var8 / 64u)];
				if (5u < Var8 / 64u)
					Var13[5] = 0u;
				else
					Var13[5] = Var1[5u - (Var8 / 64u)];
				if (4u < Var8 / 64u)
					Var13[4] = 0u;
				else
					Var13[4] = Var1[4u - (Var8 / 64u)];
				if (3u < Var8 / 64u)
					Var13[3] = 0u;
				else
					Var13[3] = Var1[3u - (Var8 / 64u)];
				if (2u < Var8 / 64u)
					Var13[2] = 0u;
				else
					Var13[2] = Var1[2u - (Var8 / 64u)];
				if (1u < Var8 / 64u)
					Var13[1] = 0u;
				else
					Var13[1] = Var1[1u - (Var8 / 64u)];
				if (0u < Var8 / 64u)
					Var13[0] = 0u;
				else
					Var13[0] = Var1[0u - (Var8 / 64u)];
			}
			else
			{
				if (6u < Var8 / 64u)
					Var13[6] = 0u;
				else if (6u == Var8 / 64u)
					Var13[6] = Var1[0] << Var8 % 64u;
				else
					Var13[6] = (Var1[6 - Var8 / 64u] << Var8 % 64u) ^ (Var1[6 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (5u < Var8 / 64u)
					Var13[5] = 0u;
				else if (5u == Var8 / 64u)
					Var13[5] = Var1[0] << Var8 % 64u;
				else
					Var13[5] = (Var1[5 - Var8 / 64u] << Var8 % 64u) ^ (Var1[5 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (4u < Var8 / 64u)
					Var13[4] = 0u;
				else if (4u == Var8 / 64u)
					Var13[4] = Var1[0] << Var8 % 64u;
				else
					Var13[4] = (Var1[4 - Var8 / 64u] << Var8 % 64u) ^ (Var1[4 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (3u < Var8 / 64u)
					Var13[3] = 0u;
				else if (3u == Var8 / 64u)
					Var13[3] = Var1[0] << Var8 % 64u;
				else
					Var13[3] = (Var1[3 - Var8 / 64u] << Var8 % 64u) ^ (Var1[3 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (2u < Var8 / 64u)
					Var13[2] = 0u;
				else if (2u == Var8 / 64u)
					Var13[2] = Var1[0] << Var8 % 64u;
				else
					Var13[2] = (Var1[2 - Var8 / 64u] << Var8 % 64u) ^ (Var1[2 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (1u < Var8 / 64u)
					Var13[1] = 0u;
				else if (1u == Var8 / 64u)
					Var13[1] = Var1[0] << Var8 % 64u;
				else
					Var13[1] = (Var1[1 - Var8 / 64u] << Var8 % 64u) ^ (Var1[1 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (0u < Var8 / 64u)
					Var13[0] = 0u;
				else if (0u == Var8 / 64u)
					Var13[0] = Var1[0] << Var8 % 64u;
				else
					Var13[0] = (Var1[0 - Var8 / 64u] << Var8 % 64u) ^ (Var1[0 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
			}
		}
	}
	else
	{
			Var13[6] = Var1[6];
			Var13[5] = Var1[5];
			Var13[4] = Var1[4];
			Var13[3] = Var1[3];
			Var13[2] = Var1[2];
			Var13[1] = Var1[1];
			Var13[0] = Var1[0];
	}
	Var14[0] = Var0[0] ^ Var13[0];
	Var14[1] = Var0[1] ^ Var13[1];
	Var14[2] = Var0[2] ^ Var13[2];
	Var14[3] = Var0[3] ^ Var13[3];
	Var14[4] = Var0[4] ^ Var13[4];
	Var14[5] = Var0[5] ^ Var13[5];
	Var14[6] = Var0[6] ^ Var13[6];
	Var0[0] = Var14[0];
	Var0[1] = Var14[1];
	Var0[2] = Var14[2];
	Var0[3] = Var14[3];
	Var0[4] = Var14[4];
	Var0[5] = Var14[5];
	Var0[6] = Var14[6];
	if (Var8 > 0)
	{
		if (Var8 > 410)
		{
			Var15[6] = 0u;
			Var15[5] = 0u;
			Var15[4] = 0u;
			Var15[3] = 0u;
			Var15[2] = 0u;
			Var15[1] = 0u;
			Var15[0] = 0u;
		}
		else
		{
			if (Var8 % 64u == 0u)
			{
				if (6u < Var8 / 64u)
					Var15[6] = 0u;
				else
					Var15[6] = Var3[6u - (Var8 / 64u)];
				if (5u < Var8 / 64u)
					Var15[5] = 0u;
				else
					Var15[5] = Var3[5u - (Var8 / 64u)];
				if (4u < Var8 / 64u)
					Var15[4] = 0u;
				else
					Var15[4] = Var3[4u - (Var8 / 64u)];
				if (3u < Var8 / 64u)
					Var15[3] = 0u;
				else
					Var15[3] = Var3[3u - (Var8 / 64u)];
				if (2u < Var8 / 64u)
					Var15[2] = 0u;
				else
					Var15[2] = Var3[2u - (Var8 / 64u)];
				if (1u < Var8 / 64u)
					Var15[1] = 0u;
				else
					Var15[1] = Var3[1u - (Var8 / 64u)];
				if (0u < Var8 / 64u)
					Var15[0] = 0u;
				else
					Var15[0] = Var3[0u - (Var8 / 64u)];
			}
			else
			{
				if (6u < Var8 / 64u)
					Var15[6] = 0u;
				else if (6u == Var8 / 64u)
					Var15[6] = Var3[0] << Var8 % 64u;
				else
					Var15[6] = (Var3[6 - Var8 / 64u] << Var8 % 64u) ^ (Var3[6 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (5u < Var8 / 64u)
					Var15[5] = 0u;
				else if (5u == Var8 / 64u)
					Var15[5] = Var3[0] << Var8 % 64u;
				else
					Var15[5] = (Var3[5 - Var8 / 64u] << Var8 % 64u) ^ (Var3[5 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (4u < Var8 / 64u)
					Var15[4] = 0u;
				else if (4u == Var8 / 64u)
					Var15[4] = Var3[0] << Var8 % 64u;
				else
					Var15[4] = (Var3[4 - Var8 / 64u] << Var8 % 64u) ^ (Var3[4 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (3u < Var8 / 64u)
					Var15[3] = 0u;
				else if (3u == Var8 / 64u)
					Var15[3] = Var3[0] << Var8 % 64u;
				else
					Var15[3] = (Var3[3 - Var8 / 64u] << Var8 % 64u) ^ (Var3[3 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (2u < Var8 / 64u)
					Var15[2] = 0u;
				else if (2u == Var8 / 64u)
					Var15[2] = Var3[0] << Var8 % 64u;
				else
					Var15[2] = (Var3[2 - Var8 / 64u] << Var8 % 64u) ^ (Var3[2 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (1u < Var8 / 64u)
					Var15[1] = 0u;
				else if (1u == Var8 / 64u)
					Var15[1] = Var3[0] << Var8 % 64u;
				else
					Var15[1] = (Var3[1 - Var8 / 64u] << Var8 % 64u) ^ (Var3[1 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
				if (0u < Var8 / 64u)
					Var15[0] = 0u;
				else if (0u == Var8 / 64u)
					Var15[0] = Var3[0] << Var8 % 64u;
				else
					Var15[0] = (Var3[0 - Var8 / 64u] << Var8 % 64u) ^ (Var3[0 - Var8 / 64u - 1u] >> (64u - Var8 % 64u));
			}
		}
	}
	else
	{
			Var15[6] = Var3[6];
			Var15[5] = Var3[5];
			Var15[4] = Var3[4];
			Var15[3] = Var3[3];
			Var15[2] = Var3[2];
			Var15[1] = Var3[1];
			Var15[0] = Var3[0];
	}
	Var16[0] = Var2[0] ^ Var15[0];
	Var16[1] = Var2[1] ^ Var15[1];
	Var16[2] = Var2[2] ^ Var15[2];
	Var16[3] = Var2[3] ^ Var15[3];
	Var16[4] = Var2[4] ^ Var15[4];
	Var16[5] = Var2[5] ^ Var15[5];
	Var16[6] = Var2[6] ^ Var15[6];
	Var2[0] = Var16[0];
	Var2[1] = Var16[1];
	Var2[2] = Var16[2];
	Var2[3] = Var16[3];
	Var2[4] = Var16[4];
	Var2[5] = Var16[5];
	Var2[6] = Var16[6];
	Var17 = (Var0[0] != 0x1u) || (Var0[1] != 0u) || (Var0[2] != 0u) || (Var0[3] != 0u) || (Var0[4] != 0u) || (Var0[5] != 0u) || ((Var0[6] & 0x3ffffffu) != 0u);
	Var4 = Var17;
	}
	Out0[0] = Var2[0];
	Out0[1] = Var2[1];
	Out0[2] = Var2[2];
	Out0[3] = Var2[3];
	Out0[4] = Var2[4];
	Out0[5] = Var2[5];
	Out0[6] = Var2[6];
}
