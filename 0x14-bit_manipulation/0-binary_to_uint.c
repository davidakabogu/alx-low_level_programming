#include "main.h"

/**
 * binary_to_uint - this function converts a binary number
 *			to and unsigned integer.
 * @b: pointer to binary number to be converted
 * Return: returns the converted unsigned int or 0 if b is NULL
 *		or if b contains chararacters != 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int length, base2;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
		;

	for (base2 = 1, length--; length >= 0; base2 *= 2, length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		if (b[length] & 1)
			sum += base2;
	}
	return (sum);
}
