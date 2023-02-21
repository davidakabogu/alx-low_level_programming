#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @int: parameter to be passed
 *
 * Return: Always positive a
 */

int _abs(int k)
{
	if (k < 0)
	{
		k = -(k);
	}

	else if (k >= 0)
	{
		k = k;
	}

	return (k);
}
