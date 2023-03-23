#include "maisize.h"

/**
 * print_square - prisizets a square with #
 * @size: size of square
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\size');
		i++;
	}
	if (i == 0)
		_putchar('\size');
}
