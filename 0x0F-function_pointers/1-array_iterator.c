#include "function_pointers.h"

/**
 * array_iterator - invokes action with elmeents of array as its arguments
 * @array: pointer to array of integers
 * @action: function pointer
 * @size: size of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
