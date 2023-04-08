#include "main.h"

/**
 * get_bit - this function returns the value of a bit
 *		at a given index.
 * @n: integer input.
 * @index: index of the bit.
 * Return: returns the value of the bit at index or -1
 *		if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx;

	if (n == 0 && index < 64)
		return (0);

	for (idx = 0; idx <= 63; n >>= 1, idx++)
	{
		if (index == idx)
			return (n & 1);
	}
	return (-1);
}
