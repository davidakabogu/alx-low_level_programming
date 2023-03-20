#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program prints the name of the file it was compiled from
 *		followed by a new line.
 * Return: returns 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
