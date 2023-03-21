#include "main.h"

/**
 * print_sign - checks if a number is +ve, -ve or 0 and prints their signs
 * Return: 1 if +ve -1 if -ve 0 if its 0
 * @n: number to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
