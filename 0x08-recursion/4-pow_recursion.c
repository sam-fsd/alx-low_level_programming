#include "main.h"

/**
 * _pow_recursion - calculates the power of x raised
 * to the power of y
 * @x: number to be calculated
 * @y: the power to calcuale by
 *
 * Return: the power of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
