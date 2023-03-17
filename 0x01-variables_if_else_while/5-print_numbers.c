#include <stdio.h>
/**
 * main - A function that prints base 10 digits
 * Return: 0 success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
