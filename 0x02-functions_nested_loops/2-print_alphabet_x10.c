#include <stdio.h>

void print_alphabet_x10(void);

/**
 * main - invokes print_alphabet()
 * Return: 0 success
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - prints alphabets 10times
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
