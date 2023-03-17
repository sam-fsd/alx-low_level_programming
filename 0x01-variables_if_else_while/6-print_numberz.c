#include <stdio.h>
/**
 * main - A function that prints digits of base 10 using putchar()
 * Return: 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar('0' + c);
		c++;
	}
	putchar('\n');
	return (0);
}
