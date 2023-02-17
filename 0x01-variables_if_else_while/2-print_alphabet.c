#include <stdio.h>

/**
 * main - This program prints lowercase alphabet
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
