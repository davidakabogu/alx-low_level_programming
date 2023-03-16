#include "main.h"
#include <stdlib.h>

/**
 * _calloc - this function allocates memory for an array using malloc
 * @nmemb: this is the number of elements in the array
 * @size: this is the byte size of each element in the array
 * Return: returns a pointer to allocated memory, NULL if the function fails
 *		or if nmemb or size == 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
