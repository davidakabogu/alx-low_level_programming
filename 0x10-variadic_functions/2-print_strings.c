#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * printf_strings - this function prints strings followed by a new line
 * @separator: this is the string to be printed between the strings
 * @n: this is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int i;

	va_start(strings, n);
	
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);
		if (ptr == 0)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}

		if (i != (n - 1) && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}
