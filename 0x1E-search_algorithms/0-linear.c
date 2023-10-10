#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear search algorithm
 * @array: Pointer to first element of the array to search in
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found in the array
 * else -1 if array is NULL or value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (value == array[i])
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
