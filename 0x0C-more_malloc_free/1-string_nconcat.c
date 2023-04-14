#include "main.h"

/**
 * string_nconcat - appends n bytes of s2 to s1 in the newly
 * allocated space
 * @s1: destination string
 * @s2: string to append
 * @n: number of bytes to append
 * Return: NULL if space allocation failed
 * a pointer to the newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len, i;

	len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';

	return (concat);
}
