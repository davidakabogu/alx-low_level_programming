#include "main.h"
#include <stdlib.h>

/**
 * array_range - this function creates an array of integers
 * @min: values for array of int
 * @max: values for array of int
 * Return: returns a pointer to the newly created array
 *		NULL if the function fails or NULL if min > max
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (0);

	ptr = malloc(sizeof(ptr) * ((max - min) + 1));
	if (ptr == 0)
		return (0);

	for (i = 0; min <= max; i++)
	{
		min++;
		ptr[i] = min;
	}

	return (ptr);
}
