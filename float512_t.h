#ifndef FLOAT512_T_H_
#define FLOAT512_T_H_

#include <stdbool.h>

#define NUM_ELEMENTS 16

typedef struct _float512 {
	char data[NUM_ELEMENTS];
} float512_t, *pfloat512_t;

float512_t int_to_float512(int i);
float512_t float32_to_float512(float f);

/*
 * Test whether left and right hand sides are equal or not.
 */
bool float512_equal(const pfloat512_t lhs, const pfloat512_t rhs);
bool float512_is_nan(const pfloat512_t f);
bool float512_is_inf(const pfloat512_t f);

float512_t float512_neg(float512_t f);

float512_t float512_add(float512_t lhs, float512_t rhs);
float512_t float512_mul(float512_t lhs, float512_t rhs);

#endif // FLOAT512_T_H_
