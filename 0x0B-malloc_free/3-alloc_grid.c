#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to a 2 dimensional array of integers,
 * or NULL if width or height is 0 or negative, or on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);

}
