#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of string
 * @str: string input
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int mid = len / 2;
	int i;

	if ((len % 2) == 1)
		mid = ((len + 1) / 2);

	for (i = mid; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
