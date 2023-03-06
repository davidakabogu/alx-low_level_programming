#include "main.h"

/**
 * _memcpy - This function copies n bytes from memory area src
 *		to memory area dest.
 *
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes to be copied.
 *
 * Return: returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
	}

	return (dest);
}
