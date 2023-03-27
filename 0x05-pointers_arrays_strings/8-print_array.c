#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * @a: first element of array
 * @n: number of elments to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
