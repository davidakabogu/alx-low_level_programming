#include "main.h"

/**
 * flip_bits - this function returns the number of bits you would
 *		need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: returns the number of bits needed to be flipped to traverse
 *		the first number to the second number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitcount = 0;
	unsigned long int xorResult = n ^ m;

	while (xorResult)
	{
		bitcount += xorResult & 1;
		xorResult >>= 1;
	}
	return (bitcount);
}
