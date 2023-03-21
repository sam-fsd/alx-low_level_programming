#include <stdio.h>
#include <stdlib.h>

int print_last_digit(int);

/**
 * main - invokes prints_last_digit()
 * Return: 0 success
 */
int main(void)
{
	printf("%d", print_last_digit(98));
	printf("%d", print_last_digit(0));
	putchar('\n');

	return (0);
}

/**
 * print_last_digit - gets the last digit of an integer value
 * Return: last digit of operand
 * @n: operand
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		int abs_num = abs(n);

		last_digit = abs_num % 10;

		return (last_digit);
	}
	else
		return (last_digit);
}
