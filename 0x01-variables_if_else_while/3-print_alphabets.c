#include <stdio.h>

/**
 * main - This program prints upper and lowercase alphabets
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int d = 97, k = 65;

	while (d < 123)
	{
		putchar(d);
		d++;
	}
	while (k < 91)
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
