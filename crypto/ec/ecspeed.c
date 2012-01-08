/* crypto/ec/ectest.c */
/*
 * Originally written by Bodo Moeller for the OpenSSL project.
 */
/* ====================================================================
 * Copyright (c) 1998-2001 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.openssl.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@openssl.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.openssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */
/* ====================================================================
 * Copyright 2002 Sun Microsystems, Inc. ALL RIGHTS RESERVED.
 *
 * Portions of the attached software ("Contribution") are developed by 
 * SUN MICROSYSTEMS, INC., and are contributed to the OpenSSL project.
 *
 * The Contribution is licensed pursuant to the OpenSSL open source
 * license provided above.
 *
 * The elliptic curve binary polynomial software is originally written by 
 * Sheueling Chang Shantz and Douglas Stebila of Sun Microsystems Laboratories.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef FLAT_INC
#include "e_os.h"
#else
#include "../e_os.h"
#endif
#include <string.h>
#include <time.h>
#include <sys/time.h>


#ifdef OPENSSL_NO_EC
int main(int argc, char * argv[]) { puts("Elliptic curves are disabled."); return 0; }
#else


#include <openssl/ec.h>
#ifndef OPENSSL_NO_ENGINE
#include <openssl/engine.h>
#endif
#include <openssl/err.h>
#include <openssl/obj_mac.h>
#include <openssl/objects.h>
#include <openssl/rand.h>
#include <openssl/bn.h>
#include <openssl/opensslconf.h>

#if defined(_MSC_VER) && defined(_MIPS_) && (_MSC_VER/100==12)
/* suppress "too big too optimize" warning */
#pragma warning(disable:4959)
#endif

#define ABORT do { \
	fflush(stdout); \
	fprintf(stderr, "%s:%d: ABORT\n", __FILE__, __LINE__); \
	ERR_print_errors_fp(stderr); \
	EXIT(1); \
} while (0)

#define TIMING_BASE_PT 0
#define TIMING_RAND_PT 1
#define TIMING_SIMUL 2

#ifndef OPENSSL_NO_EC2M

static void speed_tests(void)
	{ 
	BN_CTX *ctx = NULL;
	BIGNUM *p, *a, *b;
	EC_GROUP *group[2];

	EC_POINT *P[2], *Q[2];
	BIGNUM *x;
	char *groupnames[2];
	size_t i;
	long k;

	#if 1
	ctx = BN_CTX_new();
	if (!ctx) ABORT;
	#endif

	p = BN_new();
	a = BN_new();
	b = BN_new();
	x = BN_new();
	if (!p || !a || !b) ABORT;

	/* Setting parameters for a NIST curve K-233 (FIPS PUB 186-2, App. 6) */
	if (!BN_hex2bn(&p, "020000000000000000000000000000000000000004000000000000000001")) ABORT;
	if (!BN_hex2bn(&a, "0")) ABORT;
	if (!BN_hex2bn(&b, "1")) ABORT;
	if (!BN_hex2bn(&x, "0")) ABORT;

	group[0] = EC_GROUP_new(EC_GF2m_simple_method());
	groupnames[0] = strdup("Simple");
	group[1] = EC_GROUP_new(EC_GF2m_fast_method());
	groupnames[1] = strdup("Lopez-Dahab");

	if (!group[0]) ABORT;
	if (!group[1]) ABORT;
	if (!EC_GROUP_set_curve_GF2m(group[0], p, a, b, ctx)) ABORT;
	if (!EC_GROUP_set_curve_GF2m(group[1], p, a, b, ctx)) ABORT;

	//TODO: maybe we should call EC_GROUP_method_of

	fprintf(stdout, "Running speed checks by using Weierstrass equation\n     y^2 + x*y = x^3 + a*x^2 + b (mod 0x");
	BN_print_fp(stdout, p);
	fprintf(stdout, ")\n    a = 0x");
	BN_print_fp(stdout, a);
	fprintf(stdout, "\n    b = 0x");
	BN_print_fp(stdout, b);

	//First test - ADD
	fprintf(stdout, "\n### ADD test ###\n\n");

	for (i=0;i<2;++i) 
		{
		fprintf(stdout, "Performing 10.000 sums with algorithm %s\n", groupnames[i]);
		timeval t;
		double dt;
		P[i] = EC_POINT_new(group[i]);
		Q[i] = EC_POINT_new(group[i]);
		if (!BN_hex2bn(&x, "1")) ABORT;
		if (!EC_POINT_set_compressed_coordinates_GFp(group[i], P[i], x, 0, ctx)) ABORT;
		if (!BN_hex2bn(&x, "2")) ABORT;
		if (!EC_POINT_set_compressed_coordinates_GFp(group[i], Q[i], x, 0, ctx)) ABORT;
		
		//Timing should begin here
		gettimeofday(&t, NULL);
		dt = t.tv_sec + (t.tv_usec/1000000.0f);
		for (k=0;k<10000;++k) 
			{
			if (!EC_POINT_add(group[i], P[i], P[i], Q[i], ctx)) ABORT;
			}
		//Timing should end here
		gettimeofday(&t, NULL);
		dt = t.tv_sec + (t.tv_usec/1000000.0f) - dt;
		fprintf(stdout, "Taken time: %lf s\n", dt);

		EC_POINT_free(P[i]);
		EC_POINT_free(Q[i]);
		}

	//Second test - DBL
	fprintf(stdout, "\n### DBL TEST ###\n\n");

	for (i=0;i<2;++i) 
		{
		fprintf(stdout, "Performing 10.000 doubles with algorithm %s\n", groupnames[i]);
		timeval t;
		double dt;
		P[i] = EC_POINT_new(group[i]);
		if (!BN_hex2bn(&x, "123")) ABORT;
		if (!EC_POINT_set_compressed_coordinates_GFp(group[i], P[i], x, 0, ctx)) ABORT;
		//Timing should begin here
		gettimeofday(&t, NULL);
		dt = t.tv_sec + (t.tv_usec/1000000.0f);
		for (k=0;k<10000;++k)
			if (!EC_POINT_dbl(group[i], P[i], P[i], ctx)) ABORT;
		//Timing should end here
		gettimeofday(&t, NULL);
		dt = t.tv_sec + (t.tv_usec/1000000.0f) - dt;
		fprintf(stdout, "Taken time: %lf s\n", dt);

		EC_POINT_free(P[i]);
		}
	
	//Third test - DBL
	fprintf(stdout, "\n### MUL TEST ###\n\n");

	for (i=0;i<2;++i) 
		{
		fprintf(stdout, "Performing 1.000.000 mul with algorithm %s\n", groupnames[i]);
		timeval t;
		double dt;
		BIGNUM *n1;
		n1 = BN_new();
		P[i] = EC_POINT_new(group[i]);
		//Timing should begin here
		gettimeofday(&t, NULL);
		dt = t.tv_sec + (t.tv_usec/1000000.0f);
		for (k=0;k<1000000;++k)
			if (!EC_POINT_mul(group[i], P[i], NULL, P[i], n1, ctx)) ABORT;
		//Timing should end here
		gettimeofday(&t, NULL);
		dt = t.tv_sec + (t.tv_usec/1000000.0f) - dt;
		fprintf(stdout, "Taken time: %lf s\n", dt);

		EC_POINT_free(P[i]);
		BN_free(n1);
		}
	//Clean everything up
	if (ctx) BN_CTX_free(ctx);
	BN_free(p); BN_free(a); BN_free(b); BN_free(x);
	EC_GROUP_free(group[0]);
	EC_GROUP_free(group[1]);

	}
#endif

static const char rnd_seed[] = "string to make the random number generator think it has entropy";

int main(int argc, char *argv[])
	{	
	
	/* enable memory leak checking unless explicitly disabled */
	if (!((getenv("OPENSSL_DEBUG_MEMORY") != NULL) && (0 == strcmp(getenv("OPENSSL_DEBUG_MEMORY"), "off"))))
		{
		CRYPTO_malloc_debug_init();
		CRYPTO_set_mem_debug_options(V_CRYPTO_MDEBUG_ALL);
		}
	else
		{
		/* OPENSSL_DEBUG_MEMORY=off */
		CRYPTO_set_mem_debug_functions(0, 0, 0, 0, 0);
		}
	CRYPTO_mem_ctrl(CRYPTO_MEM_CHECK_ON);
	ERR_load_crypto_strings();

	RAND_seed(rnd_seed, sizeof rnd_seed); /* or BN_generate_prime may fail */

//	prime_field_tests();
	puts("");
#ifndef OPENSSL_NO_EC2M
	speed_tests();
#endif

#ifndef OPENSSL_NO_ENGINE
	ENGINE_cleanup();
#endif
	CRYPTO_cleanup_all_ex_data();
	ERR_free_strings();
	ERR_remove_thread_state(NULL);
	CRYPTO_mem_leaks_fp(stderr);
	
	return 0;
	}
#endif
