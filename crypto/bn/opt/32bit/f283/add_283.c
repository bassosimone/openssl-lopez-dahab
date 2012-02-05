#include <stdint.h>
void add_283_32(uint32_t Out0[9], const uint32_t In0[9], const uint32_t In1[9])
{
	uint32_t Var0[9];

	Var0[0] = In0[0] ^ In1[0];
	Var0[1] = In0[1] ^ In1[1];
	Var0[2] = In0[2] ^ In1[2];
	Var0[3] = In0[3] ^ In1[3];
	Var0[4] = In0[4] ^ In1[4];
	Var0[5] = In0[5] ^ In1[5];
	Var0[6] = In0[6] ^ In1[6];
	Var0[7] = In0[7] ^ In1[7];
	Var0[8] = In0[8] ^ In1[8];
	Out0[0] = Var0[0];
	Out0[1] = Var0[1];
	Out0[2] = Var0[2];
	Out0[3] = Var0[3];
	Out0[4] = Var0[4];
	Out0[5] = Var0[5];
	Out0[6] = Var0[6];
	Out0[7] = Var0[7];
	Out0[8] = Var0[8];
}
