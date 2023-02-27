#include "main.h"

/**
 * rev_string - This function reverses a given string
 *
 * @s: parameter to be passed
 */

void rev_string(char *s)
{
	int i, j, k;
	char l;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (k = 0; (k < j && j >= 0); j--, k++)
	{
		l = s[k];
		s[k] = s[j];
		s[j] = l;
	}
}
