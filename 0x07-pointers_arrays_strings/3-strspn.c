#include "main.h"

/**
 * _strspn - this function gets the length of a prefix substring.
 *
 * @s: string of characters.
 * @accept: bytes in initial segment of s.
 *
 * Return: number of bytes in initial segment of s which consist
 *		only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					k++;
				}
			}
		}

		else
		{
			return (k);
		}
	}

	return (k);
}


