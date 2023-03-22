#include "function_pointers.h"

/**
 * array_iterator - this function executes a function given
 *			as a parameter on each element of an array.
 * @array: this is the integer array.
 * @size: this is the size of the array.
 * @action: this is the pointer to the function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
