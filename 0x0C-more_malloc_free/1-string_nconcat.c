#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this function concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to concatenate
 * @n: number of bytes to concatenante from s2
 * Return: returns a pointer to the the newly allocated space in memory
 *		or NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, sum, k;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";


	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	sum = i + n;


	ptr = malloc(sum + 1);
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	for (k = 0; k < sum; k++)
	{
		if (k < i)
			ptr[k] = s1[k];
		else
			ptr[k] = s2[k - i];
	}

	return (ptr);
}
