#include "main.h"

/**
 * print_square - prints a square with #
 * @size: size of square
 */
void print_square(int size)
{
	if ( n <= 0)
		_putchar('\n');

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
