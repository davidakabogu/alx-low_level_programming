#include "main.h"

/**
 * *_strncat - This function concatenates two strings
 *
 * @dest: parameter to be concatenated
 * @src: parameter ot concatenate
 * @n: pass n times
 *
 * Return: Return char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (j = 0; (src[j] != '\0' && j < n); j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
