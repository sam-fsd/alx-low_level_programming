#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 * Return: 1 if is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}
