#include "main.h"

/**
 * free_grid - frees memory held by a 2D array of integer
 * pointer variable
 * @grid: double pointer to the array
 * @height; the size of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for ( i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
