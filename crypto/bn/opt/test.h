#ifndef TEST_H_
#define TEST_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

#define COUNT 1000000ll
#define LENGTH 36

#define RAND32(What) \
	for (i = 0; i < LENGTH; ++i) \
		What[i] = rand()

#define RAND64(What) \
	for (i = 0; i < LENGTH; ++i) \
		What[i] = ((uint64_t) rand()) << 32ull | rand()

#define TEST(Function, Degree, Exp1, Exp2, Exp3, Exp4) \
	RAND64(a64); \
	RAND64(b64); \
	RAND64(c64); \
	RAND32(a32); \
	RAND32(b32); \
	RAND32(c32); \
	BN_rand(a, Degree, 0, 0); \
	BN_rand(b, Degree, 0, 0); \
	BN_rand(c, Degree, 0, 0); \
	BN_rand(d, 2 * Degree - 1, 0, 0); \
	BN_rand(e, 2 * Degree - 1, 0, 0); \
	p[0] = Degree; \
	p[1] = Exp1; \
	p[2] = Exp2; \
	p[3] = Exp3; \
	p[4] = Exp4; \
	p[5] = -1; \
	\
	BN_GF2m_arr2poly(p, e); \
	clock_gettime(CLOCK_MONOTONIC, &Start); \
	for (i = 0; i < COUNT; ++i) \
		Function; \
	clock_gettime(CLOCK_MONOTONIC, &End); \
	printf("%10.1f", (Secs(End) - Secs(Start)) / COUNT * 1e9)

#define TEST3(Degree, Base, Exp1, Exp2, Exp3, Exp4) \
	TEST(Base##_##Degree##_32(a32, b32, c32), Degree, Exp1, Exp2, Exp3, Exp4); \
	printf("   "); \
	TEST(Base##_##Degree##_64(a64, b64, c64), Degree, Exp1, Exp2, Exp3, Exp4)

#define TEST2(Degree, Base, Exp1, Exp2, Exp3, Exp4) \
	TEST(Base##_##Degree##_32(a32, b32), Degree, Exp1, Exp2, Exp3, Exp4); \
	printf("   "); \
	TEST(Base##_##Degree##_64(a64, b64), Degree, Exp1, Exp2, Exp3, Exp4)

#define FULL_TEST(Degree, Exp1, Exp2, Exp3, Exp4) \
	printf("Testing F_2^%d...\n", Degree); \
	printf("            32bit        64bit      OpenSSL\n"); \
	printf("  add: "); \
		TEST3(Degree, add, Exp1, Exp2, Exp3, Exp4); \
		printf("   "); \
		TEST(BN_GF2m_add(a, b, c), Degree, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf("  mod: "); \
		TEST2(Degree, mod, Exp1, Exp2, Exp3, Exp4); \
		printf("   "); \
		TEST(BN_GF2m_mod_arr(a, d, p), Degree, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf("  sqr: "); \
		TEST2(Degree, sqr, Exp1, Exp2, Exp3, Exp4); \
		printf("   "); \
		TEST(BN_GF2m_mod_sqr_arr(a, b, p, ctx), Degree, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf("comb3: "); \
		TEST3(Degree, comb3, Exp1, Exp2, Exp3, Exp4); \
		printf("   "); \
		TEST(BN_GF2m_mod_mul_arr(a, b, c, p, ctx), Degree, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf("comb4: "); \
		TEST3(Degree, comb4, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf("comb5: "); \
		TEST3(Degree, comb5, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf(" kar3: "); \
		TEST3(Degree, kar3, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf(" kar4: "); \
		TEST3(Degree, kar4, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf(" kar5: "); \
		TEST3(Degree, kar5, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf("  inv: "); \
		TEST2(Degree, inv, Exp1, Exp2, Exp3, Exp4); \
		printf("   "); \
		TEST(BN_GF2m_mod_inv(a, b, e, ctx), Degree, Exp1, Exp2, Exp3, Exp4); \
		printf("\n"); \
	printf("\n")

#endif
