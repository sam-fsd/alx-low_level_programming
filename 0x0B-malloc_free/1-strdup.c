#include "main.h"

/**
 * _strdup - copies a sttring to a new allocated space
 * @str: pointer to a character string to be copied
 * Return: pointer to the new address
 */
char *_strdup(char *str)
{
	char *ptr_str;

	if (str == NULL)
		return (NULL);

	ptr_str = malloc(sizeof(char) * (strlen(str) + 1));

	if (ptr_str != NULL)
	{
		unsigned int i;

		for (i = 0; str[i]; i++)
			ptr_str[i] = str[i];
	}
	else
		return (NULL);

	return (ptr_str);
}
