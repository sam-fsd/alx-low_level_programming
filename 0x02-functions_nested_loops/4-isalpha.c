#include "main.h"

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
