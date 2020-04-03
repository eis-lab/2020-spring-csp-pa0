#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>
#include <float.h>

#include <assert.h>

#include <math.h>

#include "float512_t.h"

int main()
{
	float512_t pi = float32_to_float512(3.141592f);
	float512_t minus_pi = float32_to_float512(-3.141592);
	float512_t one = float32_to_float512(1.0f);
	float512_t minus_one = float32_to_float512(-1.0f);

	assert(float512_equal(pi, pi));
	assert(float512_equal(minus_pi, float512_neg(pi)));
	assert(float512_equal(minue_one, float512_mul(one, minus_one)));
	assert(float512_equal(float512_add(pi, minus_pi), float512_equal(minus_pi, pi)));

	assert(float512_is_nan(float32_to_float512(sqrt(-1))));
	assert(float512_is_inf(float32_to_float512(1.0f / 0.0f)));

	return 0;
}
