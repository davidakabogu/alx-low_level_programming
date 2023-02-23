#include "main.h"

/**
 * print_line - This function prints a straight line to the terminal
 *
 * @n: parameter to be passed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
