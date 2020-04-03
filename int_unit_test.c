#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>

#include <assert.h>

#include "int512_t.h"

int main()
{
	int512_t i = int_to_int512(13);
	int512_t minus_i = int_to_int512(-13);
	int512_t zero = int_to_int512(0);
	int512_t minus_one = int_to_int512(-1);

	assert(int512_equal(i, i));
	assert(int512_greater(i, minus_i));
	assert(int512_equal(i, int512_add(i, zero)));
	assert(int512_equal(minus_i, int512_mul(i, minus_one)));
	assert(int512_equal(int512_div(i, int_to_int512(10)), int_to_int512(1)));
	assert(int512_equal(int512_mod(i, int_to_int512(10)), int_to_int512(3)));

	return 0;
}
