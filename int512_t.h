#ifndef INT512_H_
#define INT512_H_

#include <stdint.h>
#include <stdbool.h>

#define NUM_ELEMENTS 16

typedef struct _int512 {
	uint32_t data[NUM_ELEMENTS];
} int512_t, *pint512_t;

int512_t int_to_int512(int i);
void int512_to_str(char** buf, const pint512_t i);

bool int512_equal(const pint512_t lhs, const pint512_t rhs);
bool int512_greater(const pint512_t lhs, const pint512_t rhs);

int512_t int512_add(int512_t lhs, int512_t rhs);
int512_t int512_mul(int512_t lhs, int512_t rhs);
int512_t int512_div(int512_t lhs, int512_t rhs);
int512_t int512_mod(int512_t lhs, int512_t rhs);

#endif // INT512_H_
