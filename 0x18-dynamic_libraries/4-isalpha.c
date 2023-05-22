#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: Parameter to be passed
 *
 * Return: 1 if c is a letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
