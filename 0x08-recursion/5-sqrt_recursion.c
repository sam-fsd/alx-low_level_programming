#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - checks if number is a positive number
 * and calls _sqrt()
 * @n: Integer to be tested
 *
 * Return: the square-root of n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	return (_sqrt(n, root));
}

/**
 * _sqrt - helper function to check for the actual squre-root
 * @num: integer to find the squre root
 * @root: number to be tested
 *
 * Return: if root multiplied by itself == num; root is
 * square-root. If we reach the mid of num then num is not
 * a natural number(does not have square-root)
 */
int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (_sqrt(num, root + 1));
}
