#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this function returns a pointer to a 2D array of integers
 * @width: parameter to make two dimensional array
 * @height: parameter to make two dimensional array
 *
 * Return: returns a pointer to a 2D array of ints and NULL on failure
 *		or if height or weight is <= 0.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
	{
		return (0);
	}

	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (ptr[i] == 0)
		{
			for (i--; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
