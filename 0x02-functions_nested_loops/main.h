#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


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

int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}

int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}

int _abs(int n)
{
	return (abs(n));
}

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		int abs_num = abs(n);

		last_digit = abs_num % 10;

		return (last_digit);
	}
	else
		return (last_digit);
}
