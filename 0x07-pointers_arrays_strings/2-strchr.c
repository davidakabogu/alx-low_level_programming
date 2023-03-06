#include "main.h"

/**
 * _strchr - this function locates a chararacter in a string.
 *
 * @s: string to locate character.
 * @c: character to be located.
 *
 * Return: returns a pointer to the fist occurence of c in string s
 *		or NULL if c is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (0);
}
