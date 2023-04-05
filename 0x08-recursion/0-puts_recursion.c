#include "main.h"

/**
 * _puts_recursion - prints a string recursively as long as
 * the null-byte terminator is not reached
 * @s: pointer to a char
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
