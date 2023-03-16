#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory using malloc
 *			and returns a pointer to the allocated memory.
 * @b: parameter to be passed
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	if (b == 0)
	{
		return (0);
	}
	else
	{
		ptr = malloc(b);
		if (ptr == 0)
		{
			exit (98);
		}
		return (ptr);
	}
}
