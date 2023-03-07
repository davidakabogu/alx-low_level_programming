#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string.
 *
 * @s: string to check the length of.
 *
 * Return: returns the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
