#include "main.h"

/**
 * print_diagonal - prints \ n times
 * @n: number of \ to be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}

				
