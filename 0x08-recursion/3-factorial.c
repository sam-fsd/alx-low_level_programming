#include "main.h"

/**
 * factorial - gets the factorial of integers
 * @n: integer
 *
 * Return: Factorial of the integer
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
