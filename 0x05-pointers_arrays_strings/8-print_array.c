#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints n elements of an array of integers
 *
 * @a: parameter to be passed
 * @n: parameter to be passed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}

		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}