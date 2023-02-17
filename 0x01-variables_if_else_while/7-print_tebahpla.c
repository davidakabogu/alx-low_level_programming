#include <stdio.h>

/**
 * main - This program prints reverse alphabets
 *
 * Return: Always 0 (successful)
 */

int main(void)

{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
