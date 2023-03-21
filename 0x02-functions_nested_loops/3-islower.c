#include "main.h"

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
