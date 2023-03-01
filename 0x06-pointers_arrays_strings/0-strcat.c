#include "main.h"

/**
 * *_strcat - This function pointer concatenates two strings
 *
 * @dest: parameter to be concatenated
 * @src: parameter to concatenate
 *
 * Return: Returns a char
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
