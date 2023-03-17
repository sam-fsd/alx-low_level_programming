#include <stdio.h>
/**
 * main - A function that prints digits of base 10 using putchar()
 * Return: 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
