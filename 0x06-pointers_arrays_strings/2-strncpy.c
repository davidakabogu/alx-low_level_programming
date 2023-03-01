#include "main.h"

/**
 * *_strncpy - This function copies a string
 *
 * @src: string source
 * @dest: string destination
 * @n: parameter ot be passed
 *
 * Return: Returns a character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i]); i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
