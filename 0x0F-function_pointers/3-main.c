#include "3-calc.h"

/**
 * main - this program performs simple arithmetic operations
 * @argc: ARGument Count.
 * @argv: ARGument Vector.
 * Return: returns 0.
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*ops)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	ops = get_op_func(argv[2]);

	if (ops == 0)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", ops(i, j));
	return (0);
}
