#include "main.h"

/**
 * array_range - creates an int array from min to max all inclusive
 * @min: first element of the array
 * @max: last element of the array
 * Return: integer pointer to that array
 */
int *array_range(int min, int max)
{
	int i, arr_size;
	int *arr_ptr;

	if (min > max)
		return (NULL);

	arr_size = max - min + 1;
	arr_ptr = malloc(arr_size * sizeof(int));

	if (arr_ptr == NULL)
		return (NULL);

	for (i = 0; i < arr_size; i++)
		arr_ptr[i] = min++;

	return (arr_ptr);
}
