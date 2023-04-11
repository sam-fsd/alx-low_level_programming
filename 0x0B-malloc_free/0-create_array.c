#include "main.h"

/**
 * create_array - creates an array with size defined by malloc
 * and initilizes it to a character
 * @size: size of array
 * @c: element of array
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr_ch;

	if (size == 0)
		return (NULL);

	ptr_ch = malloc(sizeof(char) * size);

	if (ptr_ch != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			ptr_ch[i] = c;
	}
	else
		return (NULL);

	return (ptr_ch);
}
