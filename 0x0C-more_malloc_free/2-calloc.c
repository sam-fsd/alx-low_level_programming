#include "main.h"

/**
 * _calloc - allocates space for an array and inilizes it to  0
 * @nmemb: number of elements in the array
 * @size: size bytes of each element
 * Return: a void pointe to that allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	n = nmemb * size;
	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, n);
	return (ptr);
}
