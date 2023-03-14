#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 *
 * @width: array width
 * @height: array height
 *
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **dom;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	dom = malloc(sizeof(int *) * height);

	if (dom == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		dom[x] = malloc(sizeof(int) * width);
		if (dom[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dom[x]);
			free(dom);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dom[x][y] = 0;
	}
	return (dom);
}
