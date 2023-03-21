#include "main.h"

int print_sign(int n);

/**
 * main - invokes print_sign() and prints its return value
 * Return: 0 (success)
 */
int main(void)
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar (r + '0');
	putchar('\n');

	r = print_sign(-4);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	return (0);
}
