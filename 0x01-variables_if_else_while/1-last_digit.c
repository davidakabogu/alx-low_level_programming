#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program generates a random value for n
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int m = n % 10;
		if (m == 0)
			printf("Last digit of %d is %d and is 0\n", n, m);

		else if (m > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, m);

		else if (m < 6 && m != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);

	return (0);
}
