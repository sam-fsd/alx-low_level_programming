#include "main.h"

/**
 * malloc_checked - allocates memory size of b
 * @b: size of memory
 * Return: address to allocated memoru terminate
 * process if address is null
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
