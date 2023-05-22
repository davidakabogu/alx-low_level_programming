#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @k: parameter to be passed
 *
 * Return: Always positive a
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
	}

	else if (n >= 0)
	{
		n = n;
	}

	return (n);
}
