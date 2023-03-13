#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array of characters
 *			and initializes it with a specific character
 * @size: this is the size of the array of characters
 * @c: this is the character to initialize the array with.
 *
 * Return: returns a pointer to the array or NULL if it fails or size == 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (0);
	}

	else
	{
		ptr = (char *) malloc(size * sizeof(c));
		if (ptr == 0)
		{
			return (0);
		}

		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}

	return (ptr);
}
