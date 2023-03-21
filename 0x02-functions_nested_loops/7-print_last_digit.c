#include "main.h"

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
		last_digit = last_digit * -1;
	
	_putchar(last_digit + '0');
	return (last_digit);
}
