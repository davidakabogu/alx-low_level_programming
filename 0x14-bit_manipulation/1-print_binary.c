#include "main.h"

/**
 * print_binary - this function prints
 *		the binary representation of a number.
 * @n: number to print binary representation.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
		}
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
