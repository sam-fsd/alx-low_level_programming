#include "function_pointers.h"

/**
 * int_index - compare each element of the array by calling
 * cmp
 * @array: pointer to an array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to a function
 *
 * Return: the index of the element that is matched
 * -1 if no matches were found or if cmp isnull
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
