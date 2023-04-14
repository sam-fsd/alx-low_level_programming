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
	char *ptr;
	unsigned int i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	if (n >= strlen(s2))
	{
		strcat(ptr, s2);
		len = strlen(ptr) + 1;
		ptr[len] = '\0';
	}
	else
		strncat(ptr, s2, n);

	len = strlen(ptr) + 1;
	ptr[len] = '\0';

	return (ptr);
}
