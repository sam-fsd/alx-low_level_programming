#include <stdio.h>
#include <ctype.h>

int _isalpha(int c);
/**
 * main - invokes _islower()
 * Return: 0 success
 */
int main(void)
{
	int a, b, c;

	a = _isalpha('a');
	b = _isalpha('+');

	putchar(a + '0');
	putchar(b + '0');
	putchar('\n');

	return (0);
}

/**
 * _isalpha - check if a character is alphabetic character
 * Return: 0 if its not an alphabetic character 1 if it is
 * @c: character to be checked
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
