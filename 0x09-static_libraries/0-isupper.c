#include "main.h"

/**
 * _isupper - function checks for uppercase characters
 *
 * @c: parameter to be passed
 *
 * Return: 1 is c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
