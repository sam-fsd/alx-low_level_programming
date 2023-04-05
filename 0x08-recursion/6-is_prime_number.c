#include "main.h"

int check_divisibility(int, int);

/**
 * is_prime_number - calls check_divisibility if n is a
 * real number greater than 3 and not less than 0
 * @n: number to be checked
 * Return: 1 if n is primenumber 0 if not
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	else if (n >= 2 && n <= 3)
		return (1);

	else
		return (check_divisibility(n, div));
}

/**
 * check_divisibility - checks if num is a prime number
 * @num: number to be cheked
 * @div: divisor
 *
 * Return: 1 if number is primenumber 0 if not
 */
int check_divisibility(int num, int div)
{
	if (num % 2 == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (check_divisibility(num, div + 1));
}
