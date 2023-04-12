#include "main.h"

/**
 * alloc_grid - allocates memory to a 2D array of pointers
 * to integers
 * @width: number of columns in that grid
 * @height: number of rows in that grid
 * Return: a double pointer to the new allocated space
 */
int **alloc_grid(int width, int height)
{
	int **arr_2D;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2D = malloc(sizeof(int *) * height);

	if (arr_2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_2D[i] = malloc(sizeof(int) * width);

		if (arr_2D[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr_2D[j]);

			free(arr_2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr_2D[i][j] = 0;
	}

	return (arr_2D);
}
