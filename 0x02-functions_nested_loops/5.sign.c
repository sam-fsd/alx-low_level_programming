#include <stdio.h>

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

/**
 * print_sign - checks if a number is +ve, -ve or 0 and prints their signs
 * Return: 1 if +ve -1 if -ve 0 if its 0
 * @n: number to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
