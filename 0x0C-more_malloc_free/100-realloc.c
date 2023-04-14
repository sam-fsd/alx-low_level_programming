#include "main.h"

/**
 * _realloc - creates extra space to old allocated space
 * @ptr: pointer old memory slot
 * @old_size: size of old memory
 * @new_size: extra space to allocate
 * Return: NULL if ptr is null. pointer to new space if successful
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem_adrs;
	char *ptr_copy, *extra_spc;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem_adrs = malloc(new_size);

		if (mem_adrs == NULL)
			return (NULL);

		return (mem_adrs);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem_adrs = malloc(sizeof(*ptr_copy) * new_size);

	if (mem_adrs == NULL)
	{
		free(ptr);
		return (NULL);
	}

	extra_spc = mem_adrs;

	for (i = 0; i < old_size && i < new_size; i++)
		extra_spc[i] = *ptr_copy++;

	free(ptr);
	return (mem_adrs);
}
