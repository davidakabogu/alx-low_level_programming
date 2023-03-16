#include "main.h"
#include <stdlib.h>

/**
 * _realloc - this function reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: this is the size of the allocated space for ptr
 * @new_size: this is the size of the new memory block
 * Return: returns a pointer or NULL if function fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (ptr == 0)
	{
		ptr = malloc(new_size);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
