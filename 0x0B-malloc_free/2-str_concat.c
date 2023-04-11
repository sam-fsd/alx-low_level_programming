#include "main.h"

/**
 * str_concat - concatenates two strings using memcpy function
 * @s1: first string
 * @s2: second string to be appended to s1
 * Return: pointer to the new string address
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int total_size = s1_len + s2_len + 1;

	ptr_str = malloc(sizeof(char) * total_size);

	memcpy(ptr_str, s1, s1_len);
	memcpy(ptr_str + s1_len, s2, s2_len + 1);

	return (ptr_str);
}
