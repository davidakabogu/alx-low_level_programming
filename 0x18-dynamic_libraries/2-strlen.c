#include "main.h"

/**
 * _strlen - This function returns the length of a string
 *
 * @s: parameter to be passed
 *
 * Return: Returns length of string
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
	{
		i++;
	}

	return (i);
}
