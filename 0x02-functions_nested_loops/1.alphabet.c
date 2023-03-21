#include <stdio.h>

void print_alphabet(void);

/**
 * main - invokes print_alphabet()
 * Return: 0 success
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabets
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
