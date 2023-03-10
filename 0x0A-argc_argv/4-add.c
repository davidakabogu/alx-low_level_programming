#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this program adds positive numbers
 *
 * @argc: stores number of command line arguments passed by the user
 * @argv: array of character pointers listing all the arguments
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i, j, result = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");

				return (1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
