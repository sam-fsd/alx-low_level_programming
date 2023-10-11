#include "search_algos.h"


/**
 * binary_search - Searches for a value in a sorted array of integers
 * using Binary search algorithms
 * @array: Array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return:
 *	Index of the value if found else -1 if array is NULL
 *	or not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (l < r)
	{
		mid = (l + r) / 2;

		print_array(array, l, r);
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * print_array - Prints an array in a formatted way
 * @a: Array to be printed
 * @l: Start index
 * @r: Last index
 */
void print_array(int a[], size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", a[i]);
		if (i != r)
			printf(", ");
	}
	printf("\n");
}
