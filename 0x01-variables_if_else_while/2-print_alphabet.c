#include <stdio.h>
/**
 * main - A function that prints all the alphabets in order
 * Return: 0 success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z' && c != EOF)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
