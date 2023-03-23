#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function returns the sum of all its parameters
 * @n: number of parameters to sum
 * Return: returns the sum of parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	/* everything starts here */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	/* everything ends here */
	va_end(list);

	return (sum);
}
