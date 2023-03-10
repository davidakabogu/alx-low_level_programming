#include "main.h"

/**
 * _strcpy - This function copies the string pointed to by src
 *		to the buffer pointed to by dest.
 *
 * @dest: parameter to be passed
 * @src: parameter to be passed
 *
 * Return: characters
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';

	return (dest);
}
