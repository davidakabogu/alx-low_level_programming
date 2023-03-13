#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees a 2D grid.
 * @grid: this is a 2D array of integers to be freed
 * @height: this is the height of the grid
 */

void free_grid(int **grid, int height)
{
	if (grid != 0 && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}

		free(grid);
	}
}
