#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibtotal;
	float total;

	while (1)
	{
		fibtotal = fib1 + fib2;
		if (fibtotal > 4000000)
			break;

		if ((fibtotal % 2) == 0)
			total = total + fibtotal;

		fib1 = fib2;
		fib2 = fibtotal;
	}
	printf("%.0f\n", total);

	return (0);
}
