#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - this function prints numbers, followed by a new line
 * @separator: this is the string to be printed between numbers
 * @n: this is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i != (n - 1) && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}
