#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: parameter to be printed
 *
 * Return: 1 if c is lower c and 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
