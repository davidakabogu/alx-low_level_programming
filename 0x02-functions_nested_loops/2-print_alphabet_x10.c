#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10x
 *
 */

void print_alphabet_x10(void)
{
	char letters;
	int m;

	for (m = 0; m <= 9; m++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}

		_putchar('\n');
	}
}
