#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this function concatenates all the arguments in your program
 * @ac: ARGument Count
 * @av: ARGument Vector
 *
 * Return: returns a pointer to a new string or NULL if it fails
 *		or NULL if ac or av == 0.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *ptr;

	if (ac == 0)
		return (0);

	for (k = i = 0; i < ac; i++)
	{
		if (av[i] == 0)
			return (0);

		for (j = 0; av[i][j] != '\0'; j++)
		{
			k++;
		}
		k++;
	}

	ptr = (char *) malloc(sizeof(char) * (k + 1));
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}

	for (i = j = l = 0; l < k; l++)
	{
		j++;
		if (av[i][j] == '\0')
		{
			ptr[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < k - 1)
			ptr[l] = av[i][j];
	}
	ptr[l] += '\0';
	return (ptr);
}
