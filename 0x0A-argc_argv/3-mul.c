#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program multiplies two numbers
 *
 * @argc: stores number of command line arguments passed by the user
 * @argv: array of character pointers listing all the arguments
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
