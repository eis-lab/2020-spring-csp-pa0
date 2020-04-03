#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>
#include <float.h>

#include "int512_t.h"

int main()
{
	int512_t i = int_to_int512(30);

	int512_to_str(NULL, &i);

	return 0;
}
