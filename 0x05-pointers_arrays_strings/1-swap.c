#include "main.h"

/**
 * swap_int - swaps the values of a & b
 * @a: first value of pointer
 * @b: second value of pointer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
