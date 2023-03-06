#include "main.h"

/**
 * _memset - This function fills the first n bytes of the memory area
 *		pointed to by s with the constant byte b.
 * @s: pointer pointing to the memory area s.
 * @b: constant byte.
 * @n: bytes to be filled.
 *
 * Return: returns a pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
