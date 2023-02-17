#include <stdio.h>

/**
 * main - This program prints numbers 0-9
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
