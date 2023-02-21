#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers till 98
 *
 * @n: parameter to be passed
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}

	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}

	else
	{
		printf("%d", n);
		printf("\n");
	}
}
