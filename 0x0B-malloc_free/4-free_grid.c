#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional array
 *
 * @grid: pointer to array of int
 * @height: grid height, number of rows
 *
 *
 * Return: nothing, frees memory
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
