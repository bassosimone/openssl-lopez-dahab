#include "test.h"
#include "all.h"
#include "cryptlib.h"
#include "bn_lcl.h"

long long NanoSecs(struct timespec Time);
float Secs(struct timespec Time);

int main()
{
	printf("Testing the binary field implementation...\n");

	struct timespec Start;
	struct timespec End;
	int i;
	uint64_t a64[LENGTH], b64[LENGTH], c64[LENGTH];
	uint32_t a32[LENGTH], b32[LENGTH], c32[LENGTH];
	BIGNUM *a, *b, *c, *d, *e;
	BN_CTX *ctx;
	int p[6];

	a = BN_new();
	b = BN_new();
	c = BN_new();
	d = BN_new();
	e = BN_new();
	ctx = BN_CTX_new();
	BN_init(a);
	BN_init(b);
	BN_init(c);
	BN_init(d);
	BN_init(e);
	BN_CTX_init(ctx);

	FULL_TEST(163, 7, 6, 3, 0);
	FULL_TEST(233, 74, 0, -1, -1);
	FULL_TEST(283, 74, 0, -1, -1);
	FULL_TEST(409, 87, 0, -1, -1);
	FULL_TEST(571, 10, 5, 2, 0);

	return 0;
}

long long NanoSecs(struct timespec Time)
{
	return Time.tv_sec * 1000000000ll + Time.tv_nsec;
}

float Secs(struct timespec Time)
{
	return NanoSecs(Time) / 1e9f;
}
