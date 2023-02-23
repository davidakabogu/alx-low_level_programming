#include "main.h"

/**
 * _isdigit - function checks for digits 0 - 9
 *
 * @c: parameter to be passed
 *
 * Return: 1 if c is a  digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
