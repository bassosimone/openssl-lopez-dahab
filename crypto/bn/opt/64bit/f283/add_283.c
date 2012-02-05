#include <stdint.h>
void add_283_64(uint64_t Out0[5], const uint64_t In0[5], const uint64_t In1[5])
{
	uint64_t Var0[5];

	Var0[0] = In0[0] ^ In1[0];
	Var0[1] = In0[1] ^ In1[1];
	Var0[2] = In0[2] ^ In1[2];
	Var0[3] = In0[3] ^ In1[3];
	Var0[4] = In0[4] ^ In1[4];
	Out0[0] = Var0[0];
	Out0[1] = Var0[1];
	Out0[2] = Var0[2];
	Out0[3] = Var0[3];
	Out0[4] = Var0[4];
}
