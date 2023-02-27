#include "main.h"

/**
 * swap_int - This function swaps the values of two integers.
 *
 * @a: parameter to be passed
 * @b: parameter to be passed
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
