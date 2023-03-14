#include "main.h"
#include <stdlib.h>

/**
 * count - this helping function counts the number of words in a string
 * @s: string to split into words
 *
 * Return: returns the number of words
 */

int count(char *s)
{
	int i, j = 0, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			j = 0;
		}
		else if (j == 0)
		{
			j = 1;
			k++;
		}
	}
	return (k);
}

/**
 * strtow - this function splits a string into words
 * @str: string to split into words
 *
 * Return: returns a pointer to an array of strings (words)
 *		or NULL if function fails returns or if str == NUll or str == ""
 */

char **strtow(char *str)
{
	char **ptr, *tmp;
	int i, k = 0, len, words, c = 0, start, end;

	for (len = 0; str[len] != '\0'; len++)
	{
		words = count(str);
		if (words == 0)
		{
			return (0);
		}
	}
	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == 0)
					return (0);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	ptr[k] = '\0';
	return (ptr);
}
