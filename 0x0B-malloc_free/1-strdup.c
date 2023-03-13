#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this function returns a pointer to a new allocated space
 *		in memory, which contains a copy of the string given as parameter
 * @str: string given as parameter to be copied
 *
 * Return: returns a pointer to the duplicated string.
 *		It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptr;

	if (str == 0)
	{
		return (0);
	}

	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			;
		}

		ptr = (char *) malloc(sizeof(char) * (i + 1));
		if (ptr == 0)
		{
			return (0);
		}

		for (j = 0; j <= i; j++)
		{
			ptr[j] = str[j];
		}

		return (ptr);
	}

	return (0);
}
