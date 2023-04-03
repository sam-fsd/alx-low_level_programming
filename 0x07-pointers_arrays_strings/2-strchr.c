#include "main.h"

/**
 * _strchr - checks for the occurrence of c in the
 * memory area pointed by s
 * @s: memory area to be checked
 * @c: character to be matched
 *
 * Return: a pointer to the first occurrence of the
 * character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
