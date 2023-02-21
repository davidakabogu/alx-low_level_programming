#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, total;
	unsigned long fib1half1, fib1half2, fib2half1, fib2half2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		total = fib1 + fib2;
		printf("%lu, ", total);

		fib1 = fib2;
		fib2 = total;
	}

	fib1half1 = fib1 / 10000000000;
	fib2half1 = fib2 / 10000000000;
	fib1half2 = fib1 % 10000000000;
	fib2half2 = fib2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		half1 = fib1half1 + fib2half1;
		half2 = fib1half2 + fib2half2;
		if (fib1half2 + fib2half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");

		fib1half1 = fib2half1;
		fib1half2 = fib2half2;
		fib2half1 = half1;
		fib2half2 = half2;
	}
	printf("\n");
	return (0);
}
