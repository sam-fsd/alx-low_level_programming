#include "main.h"

/**
 * _puts - prints a string
 * @str: deferenced string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
