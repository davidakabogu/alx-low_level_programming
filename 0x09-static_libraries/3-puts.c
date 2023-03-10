#include "main.h"

/**
 * _puts - this function prints a string followed by a new line to stdout
 *
 * @str: parameter to be passed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
