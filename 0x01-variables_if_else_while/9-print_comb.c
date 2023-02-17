#include <stdio.h>

/**
 * main - This program all combinations of single-digits
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
