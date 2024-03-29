#include "function_pointers.h"

/**
 * int_index - this function searches for an integer
 * @array: this is the integer array.
 * @size: this is the size of the array.
 * @cmp: pointer to the function to be used to compare values.
 * Return: returns the index of the first element for which the cmp
 *		function does not return 0. If no elements matches, return -1.
 *		If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);

			}
		}
	}
	return (-1);
}
