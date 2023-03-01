#include "main.h"

/**
 * print_number - This function prints an integer
 *
 * @n: parameter to be passed
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('_');
		n *= -1;
	}

	i = n;

	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar(i % 10 + '0');
}
