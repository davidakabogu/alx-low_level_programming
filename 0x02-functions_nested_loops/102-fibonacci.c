#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{

	int i;
	unsigned long fib1 = 0, fib2 = 1, total;

	for (i = 0; i < 50; i++)
	{
		total = fib1 + fib2;
		printf("%lu", total);

		fib1 = fib2;
		fib2 = total;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
