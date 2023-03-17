#include <stdio.h>
/**
 * main - A function that prints all the alphabets in order
 * Return: 0 success
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z' && c != EOF)
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z' && C != EOF)
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
