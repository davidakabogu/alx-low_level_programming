#include "main.h"

/**
 * _pow_recursion - this function returns the value of s raised to y.
 *
 * @x: parameter to be passed
 * @y: parameter to be passed
 *
 * Return: returns the value of s raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
