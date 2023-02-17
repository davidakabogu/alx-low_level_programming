#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i = 48;

	while (i < 123)
	{
		if (i == 58)
		{
			i = 97;
		}

		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
