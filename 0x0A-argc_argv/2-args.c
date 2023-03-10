#include <stdio.h>

/**
 * main - this program prints all arguments it receives
 *
 * @argc: stores number of command line arguments passed by the user
 * @argv: array of character pointers listing all the arguments
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
