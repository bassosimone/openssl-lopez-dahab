/* crypto/ec/ec2_lopezdahab.c */
/*-
 * Copyright (c) 2012 Politecnico di Torino, Italy.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * Written by Simone Basso and Matteo Avalle.
 */

/*
 * GF(2m) operations in Lopez-Dahab coordinates.
 */

#include <stdio.h>
#include <string.h>

#include <openssl/err.h>
#include "ec_lcl.h"

#ifndef OPENSSL_NO_EC2M

#ifdef OPENSSL_FIPS
#include <openssl/fips.h>
#endif

/*
 * Lopez-Dahab context.  Contains the bignum context and the group,
 * plus a number of temporary bignums for computation.  It should be
 * created on the stack and initialized with lopezdahab_init before
 * starting the multiplication.  It must be cleared in any case with
 * lopezdahab_finish just before returning to the caller.
 */

/*
 * Definitions autogenerated by: ./tools/ec2_lopezdahab.py
 */

struct lopezdahab {
	BN_CTX		*ctx;
	const EC_GROUP	*group;
	BIGNUM		regs[37];
	unsigned int	flags;
};

#define		ld_A	regs[0]
#define		ld_B	regs[1]
#define		ld_C	regs[2]
#define		ld_D	regs[3]
#define		ld_E	regs[4]
#define		ld_F	regs[5]
#define		ld_G	regs[6]
#define		ld_H	regs[7]
#define		ld_I	regs[8]
#define		ld_J	regs[9]
#define		ld_X1	regs[10]
#define		ld_X2	regs[11]
#define		ld_X3	regs[12]
#define		ld_Y1	regs[13]
#define		ld_Y2	regs[14]
#define		ld_Y3	regs[15]
#define		ld_Z1	regs[16]
#define		ld_Z2	regs[17]
#define		ld_Z3	regs[18]
#define		ld_a2	regs[19]
#define		ld_a6	regs[20]
#define		ld_t0	regs[21]
#define		ld_t1	regs[22]
#define		ld_t10	regs[23]
#define		ld_t11	regs[24]
#define		ld_t12	regs[25]
#define		ld_t13	regs[26]
#define		ld_t14	regs[27]
#define		ld_t15	regs[28]
#define		ld_t2	regs[29]
#define		ld_t3	regs[30]
#define		ld_t4	regs[31]
#define		ld_t5	regs[32]
#define		ld_t6	regs[33]
#define		ld_t7	regs[34]
#define		ld_t8	regs[35]
#define		ld_t9	regs[36]

/* End autogenerated definitions */

#define			LOPEZDAHAB_F_CTX (1<<0)		/* must free() ctx */

const EC_METHOD *lopezdahab_ec_gf2m_simple_method(void)
	{
	static const EC_METHOD ret = {
		EC_FLAGS_DEFAULT_OCT,
		NID_X9_62_characteristic_two_field,
		ec_GF2m_simple_group_init,
		ec_GF2m_simple_group_finish,
		ec_GF2m_simple_group_clear_finish,
		ec_GF2m_simple_group_copy,
		ec_GF2m_simple_group_set_curve,
		ec_GF2m_simple_group_get_curve,
		ec_GF2m_simple_group_get_degree,
		ec_GF2m_simple_group_check_discriminant,
		ec_GF2m_simple_point_init,
		ec_GF2m_simple_point_finish,
		ec_GF2m_simple_point_clear_finish,
		ec_GF2m_simple_point_copy,
		ec_GF2m_simple_point_set_to_infinity,
		0 /* set_Jprojective_coordinates_GFp */,
		0 /* get_Jprojective_coordinates_GFp */,
		ec_GF2m_simple_point_set_affine_coordinates,
		ec_GF2m_simple_point_get_affine_coordinates,
		0,0,0,
		ec_GF2m_lopezdahab_add,
		ec_GF2m_lopezdahab_dbl,
		ec_GF2m_simple_invert,
		ec_GF2m_simple_is_at_infinity,
		ec_GF2m_simple_is_on_curve,
		ec_GF2m_simple_cmp,
		ec_GF2m_lopezdahab_make_affine,
		ec_GF2m_simple_points_make_affine,

		ec_GF2m_lopezdahab_mul,
		/* the following two method functions are defined in ec2_mult.c */
		ec_GF2m_precompute_mult,
		ec_GF2m_have_precompute_mult,

		ec_GF2m_simple_field_mul,
		ec_GF2m_simple_field_sqr,
		ec_GF2m_simple_field_div,
		0 /* field_encode */,
		0 /* field_decode */,
		0 /* field_set_to_one */ };

	return &ret;
	}



/* Just in case it was not defined */
#ifndef nitems
#  define nitems(_x)	(sizeof((_x)) / sizeof((_x)[0]))
#endif

/* Initialize the Lopez-Dahab context */
static int
lopezdahab_init(struct lopezdahab *ld, BN_CTX *ctx, const EC_GROUP *group)
{
	int	i;

	memset(ld, 0, sizeof (*ld));
	if (ctx == NULL) {
		ld->flags |= LOPEZDAHAB_F_CTX;
		ctx = BN_CTX_new();
		if (ctx == NULL)
			return (0);
	}
	ld->ctx = ctx;
	ld->group = group;
	BN_CTX_start(ld->ctx);
	for (i = 0; i < nitems(ld->regs); ++i)
		BN_init(&ld->regs[i]);

	/* copy curve parameters */
	if (!BN_copy(&ld->ld_a2, &group->a))
		return (0);
	if (!BN_copy(&ld->ld_a6, &group->b))
		return (0);

	return (1);
}

/* Cleanup the Lopez-Dahab context */
static void
lopezdahab_finish(struct lopezdahab *ld)
{
	int	i;

	for (i = 0; i < nitems(ld->regs); ++i)
		BN_free(&ld->regs[i]);
	if (ld->ctx != NULL) {
		BN_CTX_end(ld->ctx);
		if (ld->flags & LOPEZDAHAB_F_CTX)
			BN_CTX_free(ld->ctx);
	}
}

/*
 * Low-level operations implementation.
 * Note that the macros assume that a struct lopezdahab named
 * ``ld`` is declared in the current scope.
 * The autogenerated code from the formulae (below) is not
 * OpenSSL specific, so we can change the macro in future
 * to point to more efficient code, e.g. something like the
 * code for nistp224 by Emilia Kasper.
 */

#define LOPEZDAHAB_SUM(res, op1, op2)					\
	if (!BN_GF2m_add(res, op1, op2))				\
		return (0)

#define LOPEZDAHAB_MUL(res, op1, op2)					\
	if (!BN_GF2m_mod_mul_arr(res, op1, op2, ld->group->poly,	\
	    ld->ctx))							\
		return (0)

#define LOPEZDAHAB_SQUARE(res, op1)					\
	if (!BN_GF2m_mod_sqr_arr(res, op1, ld->group->poly,		\
	    ld->ctx))							\
		return (0)

#define LOPEZDAHAB_INV(res, op1)					\
	if (!BN_GF2m_mod_inv(res, op1, &ld->group->field, ld->ctx))	\
		return (0)

/*
 * Code autogenerated by: ./tools/ec2_lopezdahab.py
 */
int addcnt;
int dblcnt;

/* dbl-2005-l.op3 (http://www.hyperelliptic.org/EFD/) */
static int
lopezdahab_dbl_2005_l(struct lopezdahab *ld)
{
	LOPEZDAHAB_MUL(&ld->ld_A, &ld->ld_X1, &ld->ld_Z1);
	LOPEZDAHAB_SQUARE(&ld->ld_B, &ld->ld_X1);
	LOPEZDAHAB_SUM(&ld->ld_C, &ld->ld_B, &ld->ld_Y1);
	LOPEZDAHAB_MUL(&ld->ld_D, &ld->ld_A, &ld->ld_C);
	LOPEZDAHAB_SQUARE(&ld->ld_Z3, &ld->ld_A);
	LOPEZDAHAB_SQUARE(&ld->ld_t0, &ld->ld_C);
	LOPEZDAHAB_MUL(&ld->ld_t1, &ld->ld_a2, &ld->ld_Z3);
	LOPEZDAHAB_SUM(&ld->ld_t2, &ld->ld_t0, &ld->ld_D);
	LOPEZDAHAB_SUM(&ld->ld_X3, &ld->ld_t2, &ld->ld_t1);
	LOPEZDAHAB_SUM(&ld->ld_t3, &ld->ld_Z3, &ld->ld_D);
	LOPEZDAHAB_SQUARE(&ld->ld_t4, &ld->ld_B);
	LOPEZDAHAB_MUL(&ld->ld_t5, &ld->ld_t4, &ld->ld_Z3);
	LOPEZDAHAB_MUL(&ld->ld_t6, &ld->ld_t3, &ld->ld_X3);
	LOPEZDAHAB_SUM(&ld->ld_Y3, &ld->ld_t6, &ld->ld_t5);

	return (1);
}

/* add-2005-dl.op3 (http://www.hyperelliptic.org/EFD/) */
static int
lopezdahab_add_2005_dl(struct lopezdahab *ld)
{
	LOPEZDAHAB_MUL(&ld->ld_A, &ld->ld_X1, &ld->ld_Z2);
	LOPEZDAHAB_MUL(&ld->ld_B, &ld->ld_X2, &ld->ld_Z1);
	LOPEZDAHAB_SQUARE(&ld->ld_C, &ld->ld_A);
	LOPEZDAHAB_SQUARE(&ld->ld_D, &ld->ld_B);
	LOPEZDAHAB_SUM(&ld->ld_E, &ld->ld_A, &ld->ld_B);
	LOPEZDAHAB_SUM(&ld->ld_F, &ld->ld_C, &ld->ld_D);
	LOPEZDAHAB_SQUARE(&ld->ld_t0, &ld->ld_Z2);
	LOPEZDAHAB_MUL(&ld->ld_G, &ld->ld_Y1, &ld->ld_t0);
	LOPEZDAHAB_SQUARE(&ld->ld_t1, &ld->ld_Z1);
	LOPEZDAHAB_MUL(&ld->ld_H, &ld->ld_Y2, &ld->ld_t1);
	LOPEZDAHAB_SUM(&ld->ld_I, &ld->ld_G, &ld->ld_H);
	LOPEZDAHAB_MUL(&ld->ld_J, &ld->ld_I, &ld->ld_E);
	LOPEZDAHAB_MUL(&ld->ld_t2, &ld->ld_Z1, &ld->ld_Z2);
	LOPEZDAHAB_MUL(&ld->ld_Z3, &ld->ld_F, &ld->ld_t2);
	LOPEZDAHAB_SUM(&ld->ld_t3, &ld->ld_H, &ld->ld_D);
	LOPEZDAHAB_SUM(&ld->ld_t4, &ld->ld_C, &ld->ld_G);
	LOPEZDAHAB_MUL(&ld->ld_t5, &ld->ld_B, &ld->ld_t4);
	LOPEZDAHAB_MUL(&ld->ld_t6, &ld->ld_A, &ld->ld_t3);
	LOPEZDAHAB_SUM(&ld->ld_X3, &ld->ld_t6, &ld->ld_t5);
	LOPEZDAHAB_MUL(&ld->ld_t7, &ld->ld_F, &ld->ld_G);
	LOPEZDAHAB_MUL(&ld->ld_t8, &ld->ld_A, &ld->ld_J);
	LOPEZDAHAB_SUM(&ld->ld_t9, &ld->ld_t8, &ld->ld_t7);
	LOPEZDAHAB_SUM(&ld->ld_t10, &ld->ld_J, &ld->ld_Z3);
	LOPEZDAHAB_MUL(&ld->ld_t11, &ld->ld_t10, &ld->ld_X3);
	LOPEZDAHAB_MUL(&ld->ld_t12, &ld->ld_t9, &ld->ld_F);
	LOPEZDAHAB_SUM(&ld->ld_Y3, &ld->ld_t12, &ld->ld_t11);

	return (1);
}

/* madd-2005-dl.op3 (http://www.hyperelliptic.org/EFD/) */
static int
lopezdahab_madd_2005_dl(struct lopezdahab *ld)
{
	LOPEZDAHAB_SQUARE(&ld->ld_t0, &ld->ld_Z1);			//t0 = Z1^2
	LOPEZDAHAB_MUL(&ld->ld_t1, &ld->ld_Y2, &ld->ld_t0);	//t1 = Y2*Z1^2
	LOPEZDAHAB_SUM(&ld->ld_A, &ld->ld_Y1, &ld->ld_t1); 	//A = Y1 + Y2*Z1^2
	LOPEZDAHAB_MUL(&ld->ld_t2, &ld->ld_X2, &ld->ld_Z1);	//t2 = X2*Z1
	LOPEZDAHAB_SUM(&ld->ld_B, &ld->ld_X1, &ld->ld_t2); 	//B = X1 + X2*Z1
	LOPEZDAHAB_MUL(&ld->ld_C, &ld->ld_B, &ld->ld_Z1); 	//C = B * Z1
	LOPEZDAHAB_SQUARE(&ld->ld_Z3, &ld->ld_C);			//Z3 = C^2
	LOPEZDAHAB_MUL(&ld->ld_D, &ld->ld_X2, &ld->ld_Z3);	//D = X2*Z3
	LOPEZDAHAB_SQUARE(&ld->ld_t3, &ld->ld_A);			//t3 = A^2
	LOPEZDAHAB_SQUARE(&ld->ld_t4, &ld->ld_B);			//t4 = B^2
	LOPEZDAHAB_MUL(&ld->ld_t5, &ld->ld_a2, &ld->ld_C);	//t5 = a2*C
	LOPEZDAHAB_SUM(&ld->ld_t6, &ld->ld_A, &ld->ld_t4);	//t6 = A + B^2
	LOPEZDAHAB_SUM(&ld->ld_t7, &ld->ld_t6, &ld->ld_t5);	//t7 = A + B^2 + a2*C
	LOPEZDAHAB_MUL(&ld->ld_t8, &ld->ld_C, &ld->ld_t7);	//t8 = C * (A + B^2 + a2*C)
	LOPEZDAHAB_SUM(&ld->ld_X3, &ld->ld_t3, &ld->ld_t8);	//X3 = A^2 + C * (A + B^2 + a2*C)
	LOPEZDAHAB_SUM(&ld->ld_t9, &ld->ld_D, &ld->ld_X3);	//t9 = D + X3
	LOPEZDAHAB_MUL(&ld->ld_t10, &ld->ld_A, &ld->ld_C);	//t10 = A*C
	LOPEZDAHAB_SUM(&ld->ld_t11, &ld->ld_t10, &ld->ld_Z3);	//t11 = A*C + Z3
	LOPEZDAHAB_MUL(&ld->ld_t12, &ld->ld_t9, &ld->ld_t11);	//t12 = (D+X3)*(A*C+Z3)
	LOPEZDAHAB_SUM(&ld->ld_t13, &ld->ld_Y2, &ld->ld_X2);	//t13 = Y2+X2
	LOPEZDAHAB_SQUARE(&ld->ld_t14, &ld->ld_Z3);				//t14 = Z3^2
	LOPEZDAHAB_MUL(&ld->ld_t15, &ld->ld_t13, &ld->ld_t14);	//t15 = (Y2+X2)*Z3^2
	LOPEZDAHAB_SUM(&ld->ld_Y3, &ld->ld_t12, &ld->ld_t15);	//Y3 = (D+X3)*(A*C*Z3)+(Y2*X2)*Z3^2

	return (1);
}

/* add.op3 (http://www.hyperelliptic.org/EFD) */
static int
lopezdahab_add_affine(struct lopezdahab *ld)
{
	LOPEZDAHAB_SUM(&ld->ld_t0, &ld->ld_Y1, &ld->ld_Y2);
	LOPEZDAHAB_SUM(&ld->ld_t1, &ld->ld_X1, &ld->ld_X2);
	LOPEZDAHAB_INV(&ld->ld_t2, &ld->ld_t1);
	LOPEZDAHAB_MUL(&ld->ld_A, &ld->ld_t0, &ld->ld_t2);
	LOPEZDAHAB_SQUARE(&ld->ld_t3, &ld->ld_A);
	LOPEZDAHAB_SUM(&ld->ld_t4, &ld->ld_t3, &ld->ld_A);
	LOPEZDAHAB_SUM(&ld->ld_t5, &ld->ld_t4, &ld->ld_X1);
	LOPEZDAHAB_SUM(&ld->ld_t6, &ld->ld_t5, &ld->ld_X2);
	LOPEZDAHAB_SUM(&ld->ld_X3, &ld->ld_t6, &ld->ld_a2);
	LOPEZDAHAB_SUM(&ld->ld_t7, &ld->ld_X1, &ld->ld_X3);
	LOPEZDAHAB_MUL(&ld->ld_t8, &ld->ld_A, &ld->ld_t7);
	LOPEZDAHAB_SUM(&ld->ld_t9, &ld->ld_t8, &ld->ld_X3);
	LOPEZDAHAB_SUM(&ld->ld_Y3, &ld->ld_t9, &ld->ld_Y1);
	if (!BN_set_word(&ld->ld_Z3, 1))
		return (0);

	return (1);
}

/* dbl.op3 (http://www.hyperelliptic.org/EFD) */
static int
lopezdahab_dbl_affine(struct lopezdahab *ld)
{
	LOPEZDAHAB_INV(&ld->ld_t0, &ld->ld_X1);
	LOPEZDAHAB_MUL(&ld->ld_t1, &ld->ld_Y1, &ld->ld_t0);
	LOPEZDAHAB_SUM(&ld->ld_A, &ld->ld_X1, &ld->ld_t1);
	LOPEZDAHAB_SQUARE(&ld->ld_t2, &ld->ld_A);
	LOPEZDAHAB_SUM(&ld->ld_t3, &ld->ld_t2, &ld->ld_A);
	LOPEZDAHAB_SUM(&ld->ld_X3, &ld->ld_t3, &ld->ld_a2);
	LOPEZDAHAB_SUM(&ld->ld_t4, &ld->ld_X1, &ld->ld_X3);
	LOPEZDAHAB_MUL(&ld->ld_t5, &ld->ld_A, &ld->ld_t4);
	LOPEZDAHAB_SUM(&ld->ld_t6, &ld->ld_t5, &ld->ld_X3);
	LOPEZDAHAB_SUM(&ld->ld_Y3, &ld->ld_t6, &ld->ld_Y1);
	if (!BN_set_word(&ld->ld_Z3, 1))
		return (0);

	return (1);
}

/* End autogenerated code */

/*
 * Load and store
 */

/* Load a point and optionally convert it to Lopez-Dahab coordinates */
static int
lopezdahab_load(BIGNUM *X3, BIGNUM *Y3, BIGNUM *Z3, const BIGNUM *X1,
    const BIGNUM *Y1, const BIGNUM *Z1, int convert)
{
	if (!convert) {
		/* Already in Lopez-Dahab coordinates */
		if (!BN_copy(X3, X1))
			return (0);
		if (!BN_copy(Y3, Y1))
			return (0);
		if (!BN_copy(Z3, Z1))
			return (0);
	} else if (BN_is_zero(Z1)) {
		/*
		 * When the input point is the point at the
		 * infinity (identified by the flag Z=0), we
		 * are very strict and the output point is
		 * (1,0,0), which is the exact representation
		 * of the point at infinity in Lopez-Dahab
		 * coordinates.
		 */
		if (!BN_set_word(X3, 1))
			return (0);
		if (!BN_set_word(Y3, 0))
			return (0);
		if (!BN_set_word(Z3, 0))
			return (0);
	} else {
		if (!BN_copy(X3, X1))
			return (0);
		if (!BN_copy(Y3, Y1))
			return (0);
		/*
		 * Here we assume that the input point is
		 * affine and we take the liberty of setting
		 * Z3 to 1 without bothering to check the
		 * exact value of Z1, i.e. for us Z1 is just
		 * a boolean flag.
		 */
		if (!BN_set_word(Z3, 1))
			return (0);
	}

	return (1);
}

/* Get P1 coordinates from (X,Y,Z) */
static int
lopezdahab_load_P1(struct lopezdahab *ld, const BIGNUM *X, const BIGNUM *Y,
    const BIGNUM *Z, int convert)
{
	return (lopezdahab_load(&ld->ld_X1, &ld->ld_Y1, &ld->ld_Z1,
	    X, Y, Z, convert));
}

/* Get P2 coordinates from (X,Y,Z) */
static int
lopezdahab_load_P2(struct lopezdahab *ld, const BIGNUM *X,
    const BIGNUM *Y, const BIGNUM *Z, int convert)
{
	return (lopezdahab_load(&ld->ld_X2, &ld->ld_Y2, &ld->ld_Z2,
	    X, Y, Z, convert));
}

/* Store a point and optionally convert it from Lopez-Dahab coordinates */
static int
lopezdahab_store(struct lopezdahab *ld, BIGNUM *X3, BIGNUM *Y3, BIGNUM *Z3,
    const BIGNUM *X1, const BIGNUM *Y1, const BIGNUM *Z1, int convert)
{
	if (!convert || BN_is_one(Z1)) {
		/* Stay in Lopez-Dahab coordinates */
		if (!BN_copy(X3, X1))
			return (0);
		if (!BN_copy(Y3, Y1))
			return (0);
		if (!BN_copy(Z3, Z1))
			return (0);
	} else if (BN_is_zero(Z1)) {
		/*
		 * When the input point is the point at the
		 * infinity (identified by Z=0 in Lopez-
		 * Dahab coordinates), the output point is
		 * (1,0,0), which is a valid representation
		 * of the point at infinity in affine coordinates
		 * (any point with Z=0 will do).
		 */
		if (!BN_set_word(X3, 1))
			return (0);
		if (!BN_set_word(Y3, 0))
			return (0);
		if (!BN_set_word(Z3, 0))
			return (0);
	} else {
		/*
		 * The point (X, Y, Z) in lopezdahab coordinates is
		 * converted to (X/Z, Y/Z^2) in affine coordinates.
		 */
		LOPEZDAHAB_INV(&ld->ld_t0, Z1);
		LOPEZDAHAB_MUL(X3, X1, &ld->ld_t0);
		LOPEZDAHAB_SQUARE(&ld->ld_t0, &ld->ld_t0);
		LOPEZDAHAB_MUL(Y3, Y1, &ld->ld_t0);
		/*
		 * Reset Z to 1
		 */
		if (!BN_set_word(Z3, 1))
			return (0);
	}

	return (1);
}

/* Save P3 coordinates into (X,Y,Z) */
static int
lopezdahab_store_P3(struct lopezdahab *ld, BIGNUM *X, BIGNUM *Y, BIGNUM *Z,
    int convert)
{
	return (lopezdahab_store(ld, X, Y, Z, &ld->ld_X3, &ld->ld_Y3,
	    &ld->ld_Z3, convert));
}

/*
 * Add and double
 */

/* Internal implementation of DBL in Lopez-Dahab coordinates */
static int
lopezdahab_dbl(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
    BN_CTX *ctx, int convert)
{
	struct	lopezdahab ld;
	int	result = 0;
	dblcnt++;
	if (EC_POINT_is_at_infinity(group, a))
		return (EC_POINT_set_to_infinity(group, r));

	if (!lopezdahab_init(&ld, ctx, group))
		goto end;
	if (!lopezdahab_load_P1(&ld, &a->X, &a->Y, &a->Z, convert))
		goto end;
	if (!lopezdahab_dbl_2005_l(&ld))
		goto end;
	if (!lopezdahab_store_P3(&ld, &r->X, &r->Y, &r->Z, convert))
		goto end;
	result = 1;

end:	lopezdahab_finish(&ld);
	return (result);
}

/* Internal implementation of DBL in Affine coordinates
 * HANDLE WITH CARE: it only works for points that are already
 * in affine coordinates! It wil produce wrong results otherwise
 */
int
lopezdahab_dbl_a(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
    BN_CTX *ctx)
{
	struct	lopezdahab ld;
	int	result = 0;
	dblcnt++;
	if (EC_POINT_is_at_infinity(group, a))
		return (EC_POINT_set_to_infinity(group, r));

	if (!lopezdahab_init(&ld, ctx, group))
		goto end;
	if (!lopezdahab_load_P1(&ld, &a->X, &a->Y, &a->Z, 0))
		goto end;
	if (!lopezdahab_dbl_affine(&ld))
		goto end;
	if (!lopezdahab_store_P3(&ld, &r->X, &r->Y, &r->Z, 0))
		goto end;
	result = 1;

end:	lopezdahab_finish(&ld);
	return (result);
}


/* Internal implementation of ADD in Lopez-Dahab coordinates */
static int
lopezdahab_add(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
    const EC_POINT *b, BN_CTX *ctx, int convert)
{
	struct	lopezdahab ld;
	int	result = 0;
	addcnt++;
	
	/*
	 * When one of the two points is at infinity
	 * the result is the other point.
	 */
	if (EC_POINT_is_at_infinity(group, a))
		return (EC_POINT_copy(r, b));
	if (EC_POINT_is_at_infinity(group, b))
		return (EC_POINT_copy(r, a));
	/*
	 * When the two points are one the inverse
	 * of the other the result is our friend the
	 * point at infinity.
	 * When the two points are equal the explicit
	 * formula for ADD does not work and we need
	 * instead to use the DBL formula.
	 */
	if (BN_cmp(&a->X, &b->X) == 0) {
		if (BN_cmp(&a->Y, &b->Y) != 0)
			return (EC_POINT_set_to_infinity(group, r));
		else
			return (lopezdahab_dbl(group, r, a,
			    ctx, convert));
	}
	

	if (!lopezdahab_init(&ld, ctx, group))
		goto end;
	if (!lopezdahab_load_P1(&ld, &a->X, &a->Y, &a->Z, convert))
		goto end;
	if (!lopezdahab_load_P2(&ld, &b->X, &b->Y, &b->Z, convert))
		goto end;

	if (BN_is_one(&b->Z)) {
		if (!lopezdahab_madd_2005_dl(&ld)) //If B is in affine coordinates, the special MADD is faster
			goto end;
	} else {
		if (!lopezdahab_add_2005_dl(&ld)) //If nothing else gose, LopezDahab is the way
			goto end;
	}
	if (!lopezdahab_store_P3(&ld, &r->X, &r->Y, &r->Z, convert))
		goto end;
	result = 1;

end:	lopezdahab_finish(&ld);
	return (result);
}

/* Internal implementation of ADD in Lopez-Dahab coordinates */
int
lopezdahab_add_a(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
    const EC_POINT *b, BN_CTX *ctx, int convert)
{
	struct	lopezdahab ld;
	int	result = 0;
	addcnt++;
	
	/*
	 * When one of the two points is at infinity
	 * the result is the other point.
	 */
	if (EC_POINT_is_at_infinity(group, a))
		return (EC_POINT_copy(r, b));
	if (EC_POINT_is_at_infinity(group, b))
		return (EC_POINT_copy(r, a));
	/*
	 * When the two points are one the inverse
	 * of the other the result is our friend the
	 * point at infinity.
	 * When the two points are equal the explicit
	 * formula for ADD does not work and we need
	 * instead to use the DBL formula.
	 */
	if (BN_cmp(&a->X, &b->X) == 0) {
		if (BN_cmp(&a->Y, &b->Y) != 0)
			return (EC_POINT_set_to_infinity(group, r));
		else
			return (lopezdahab_dbl(group, r, a,
			    ctx, convert));
	}
	

	if (!lopezdahab_init(&ld, ctx, group))
		goto end;
	if (!lopezdahab_load_P1(&ld, &a->X, &a->Y, &a->Z, convert))
		goto end;
	if (!lopezdahab_load_P2(&ld, &b->X, &b->Y, &b->Z, convert))
		goto end;

	if (!lopezdahab_add_affine(&ld)) //If B is in affine coordinates, the special MADD is faster
		goto end;
	if (!lopezdahab_store_P3(&ld, &r->X, &r->Y, &r->Z, convert))
		goto end;
	result = 1;

end:	lopezdahab_finish(&ld);
	return (result);
}

/*
 * For testing
 */

/* Perform affine ADD in Lopez-Dahab coordinates */
int
ec_GF2m_lopezdahab_add(const EC_GROUP *group, EC_POINT *r,
    const EC_POINT *a, const EC_POINT *b, BN_CTX *ctx)
{
	int convert = (*group->flags & EC_FLAGS_NOGET_AFFINE)?0:1; 
	return (lopezdahab_add(group, r, a, b, ctx, convert));
}

/* Perform affine DBL in Lopez-Dahab coordinates */
int
ec_GF2m_lopezdahab_dbl(const EC_GROUP *group, EC_POINT *r,
    const EC_POINT *a, BN_CTX *ctx)
{
	int convert = (*group->flags & EC_FLAGS_NOGET_AFFINE)?0:1;
	return (lopezdahab_dbl(group, r, a, ctx, convert));
}

/* Converts the given EC_POINT to affine coordinates. */
int
ec_GF2m_lopezdahab_make_affine(const EC_GROUP *group, EC_POINT *point, BN_CTX *ctx)
{
	struct lopezdahab ldd;
	struct lopezdahab *ld = &ldd;
	int result = 0;

	if (!lopezdahab_init(ld, ctx, group))
		goto end;

	if (BN_is_zero(&point->Z)) {
		/* This is the point at infinity */
		if (!BN_set_word(&point->X, 1))
			goto end;
		if (!BN_set_word(&point->Y, 0))
			goto end;
	} else if (BN_is_one(&point->Z)) {
		/* Already OK. Cut it here */
	} else {
		/*
		 * The point (X, Y, Z) in lopezdahab coordinates is
		 * converted to (X/Z, Y/Z^2) in affine coordinates.
		 */
		LOPEZDAHAB_INV(&ld->ld_t0, &point->Z);

		LOPEZDAHAB_MUL(&point->X, &point->X, &ld->ld_t0);
		LOPEZDAHAB_SQUARE(&ld->ld_t0, &ld->ld_t0);
		LOPEZDAHAB_MUL(&point->Y, &point->Y, &ld->ld_t0);

		/*
		 * Reset Z to 1
		 */
		if (!BN_set_word(&point->Z, 1))
			goto end;
	}

	result = 1;

end:	lopezdahab_finish(ld);
	return result;
}

/* Performs MUL in lopez-dahab coordinates */
int
ec_GF2m_lopezdahab_mul(const EC_GROUP *group, EC_POINT *r, const BIGNUM *scalar, size_t num, const EC_POINT *points[], const BIGNUM *scalars[], BN_CTX *ctx) 
{
        BN_CTX *new_ctx = NULL;
        int ret = 0;
	*group->flags |= EC_FLAGS_NOGET_AFFINE;
	addcnt=0;
	dblcnt=0;

        if (ctx == NULL)
                {
                ctx = new_ctx = BN_CTX_new();
                if (ctx == NULL)
                        return 0;
                }

        ret = ec_lopezdahab_wNAF_mul(group, r, scalar, num, points, scalars, ctx);

	*group->flags &= ~EC_FLAGS_NOGET_AFFINE;
	if (!group->meth->make_affine(group, r, ctx))
		goto err;

//	fprintf(stdout, "%d ADD, %d DBL\n", addcnt, dblcnt);
  err:
        if (new_ctx != NULL)
                BN_CTX_free(new_ctx);
        return ret;
}


#endif /* !OPENSSL_NO_EC2M */
