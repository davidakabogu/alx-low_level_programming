#include "main.h"

/**
 * _puts - this function prints a string followed by a new line to stdout
 *
 * @str: parameter to be passed
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
