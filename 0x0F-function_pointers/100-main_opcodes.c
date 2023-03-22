#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: ARGument Count.
 * @argv: ARGument Vector.
 * Return: returns 0.
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, numbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbytes = atoi(argv[1]);

	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < numbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != numbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
