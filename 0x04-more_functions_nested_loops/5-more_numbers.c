#include "main.h"

/**
 * more_numbers - prints numbers  0 to 14
 * followed by new line
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
		_putchar(i + '0');

	_putchar('\n');
}
