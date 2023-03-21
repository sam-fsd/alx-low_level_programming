#include <stdio.h>
#include <stdlib.h>

int _abs(int n);
/**
 * main - invokes _abs() and prints its value
 * Return: 0 success
 */
int main(void)
{
	printf("Absolute value is %d\n", _abs(-34));
	printf("Absolute value is %d\n", _abs(4));
	return (0);
}

/**
 * _abs - prints absolute value with abs()
 * Return: int value
 * @n: value
 */
int _abs(int n)
{
	return (abs(n));
}
