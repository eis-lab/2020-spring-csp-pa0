CC=gcc -std=c11

all: int-unit-test float-unit-test
	./int_unit_test
	./float_unit_test

lib:
	$(CC) -c float512_t.c int512_t.c
	ar rcs libnum512_t.a float512_t.o int512_t.o

int-unit-test: lib
	$(CC) -o int_unit_test int_unit_test.c -L. -lnum512_t -lm

float-unit-test: lib
	$(CC) -o float_unit_test float_unit_test.c -L. -lnum512_t -lm

clean:
	rm *.o *.a int_unit_test float_unit_test
