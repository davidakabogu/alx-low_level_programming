#include "main.h"

/**
 * _strstr - this function finds the first occurrence
 *		of the substring needle in the string haystack.
 * 
 * @haystack: string to be searched.
 * @needle: substring to search for.
 *
 * Return: returns a pointer to the beggining of located substring
 *		or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if ((haystack[i] == needle[j]) && (haystack[i] == needle[0]))
			{
				return (haystack + i);
			}
		}
	}

	return ('\0');
}
