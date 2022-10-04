#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: The 2D grid
 */

int **alloc_grid(int width, int height)
{
	int i, **grid;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] =  malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i <= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);

}

