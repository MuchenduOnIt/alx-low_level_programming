#include <stidio.h>

/**
 * main -Entry point
 *
 * return: Always 0 (Success)
 */ 

int main() {
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("size of char: %zu byte\n", sizeof(charType));

	return 0;
}