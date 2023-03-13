#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function concatenates two strings
 * @s1: string paramater to concatenante
 * @s2: string parameter to concatenante
 *
 * Return: returns a pointer to newly allocated space in memory
 *		which contains the contents of s1, followed by the contents of s2
 *		and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *ptr;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	ptr = (char *) malloc(sizeof(char) * (i + j + 1));
	if (ptr == 0)
	{
		return (0);
	}

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		ptr[k] += s2[l];
		k++;
	}

	return (ptr);
}
