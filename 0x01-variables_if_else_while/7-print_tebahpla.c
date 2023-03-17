#include <stdio.h>
/**
 * main - a funtion that prints alphabets in reverse order using putchar()
 * Return: 0 success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
