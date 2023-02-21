#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @k: parameter to be passed
 *
 * Return: Always 0
 */

int print_last_digit(int k)
{
	int m;

	m = k % 10;

	if (k < 0)
	{
		m = -(m);
	}
	_putchar(m + '0');

	return (m);
}
