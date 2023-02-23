#include "main.h"

/**
 * print_most_numbers - this function prints most numbers
 *			from 0 -9 excluding 2 & 4.
 */

void print_most_numbers(void)
{
	int c = 48;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}

	_putchar('\n');
}
