#include <stdio.h>
#include <ctype.h>

int _islower(int c);
/**
 * main - invokes _islower
 * Return: 0 success
 */
int main(void)
{
	int r, j;

	r = _islower('H');
	j = _islower('h');

	putchar(r + '0');
	putchar(j + '0');
	putchar('\n');

	return (0);
}

/**
 * _islower - checks if a character is lowercase
 * Return: 0 if its not lowercase and 1 if it is
 *@c: character to be checked
 */
int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}
