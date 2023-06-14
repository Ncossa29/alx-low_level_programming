#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prototype
 * Description: returns a pointer to a 2 dimensional
 * @width: width input
 * @height: height input
 * Return: pointer grid
 */
int **alloc_grid(int width, int height)
{
	int x, y, *grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);

			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
