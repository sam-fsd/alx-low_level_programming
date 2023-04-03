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
	unsigned int i;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			char *ptr;

			ptr = &s[i];
			return (ptr);
		}
		i++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c != s[i])
			return (NULL);
	}
}
