#include "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0
 *		at a given index.
 * @n: pointer to an lu integer
 * @index: index of the bit to be cleared
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}
	i = 1UL << index;
	if (*n & i)
	{
		*n ^= i;
	}
	return (1);
}
