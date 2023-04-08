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
	int i, base2;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	for (base2 = 1, i--; i >= 0; base2 *= 2, i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] & 1)
			sum += base2;
	}
	return (sum);
}
