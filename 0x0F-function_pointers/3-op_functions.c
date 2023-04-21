#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: first operand
 * @b: second operand
 * Return: sum of the two
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first operand
 * @b: second operand
 * Return: difference of the two
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first operand
 * @b: second operand
 * Return: product of the two
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first operand
 * @b: second operand
 * Return: division of the two
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two numbers
 * @a: first operand
 * @b: second operand
 * Return: modulous of the two
 */
int op_mod(int a, int b)
{
	return (a % b);
}
