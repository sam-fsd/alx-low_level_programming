#include <stdio.h>
/**
 * main - A function that prints digits in the base of 16
 * Return: 0 success
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
