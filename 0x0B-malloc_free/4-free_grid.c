#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Releases data in a grid
 * @grid: the grid
 * @height: height of the grid
 *
 *
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

