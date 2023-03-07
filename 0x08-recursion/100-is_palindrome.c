#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string.
 *
 * @s: string parameter to count
 *
 * Return: returns the length of a string.
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

/**
 * comparator - this function compares each character of the string.
 *
 * @s: string parameter to compare
 *
 * @n1: smallest iterating parameter
 *
 * @n2: largest iterating parameter
 *
 * Return: returns an integer
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}

		return (0 + comparator(s, n1 + 1, n2 - 1));
	}

	return (0);
}

/**
 * is_palindrome - this function checks if a string is a palindrome.
 *
 * @s: string parameter to be checked
 *
 * Return: returns 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
