#include "main.h"

/**
 * reverse_array - This function reverses the content
 *			of an array of integers.
 *
 * @a: array of integers
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
