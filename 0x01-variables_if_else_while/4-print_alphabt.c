#include <stdio.h>
/**
 * main - A function that prints all the alphabets in order except q & e
 * Return: 0 success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z' && c != EOF)
	{
		if (c == 'q' || c == 'e')
		{
			c += 1;

			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
