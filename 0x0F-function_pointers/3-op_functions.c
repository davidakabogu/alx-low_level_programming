#include "3-calc.h"

/**
 * op_add - this function sums two numbers.
 * @i: first number.
 * @j: second number.
 * Return: returns the sum
 */

int op_add(int i, int j)
{
	return (i + j);
}

/**
 * op_sub - this function subctracts two numbers.
 * @i: first number.
 * @j: second number.
 * Return: returns the difference.
 */
int op_sub(int i, int j)
{
	return (i - j);
}

/**
 * op_mul - this function multiplies two numbers.
 * @i: first number.
 * @j: second number.
 * Return: returns the product
 */

int op_mul(int i, int j)
{
	return (i * j);
}

/**
 * op_div - this function divides two numbers
 * @i: first number.
 * @j: second number.
 * Return: returns the division
 */

int op_div(int i, int j)
{
	if (j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (i / j);
}

/**
 * op_mod -this function calculates the modulus of two numbers.
 * @i: first number.
 * @j: second number.
 * Return: returns the remainder of the division.
 */

int op_mod(int i, int j)
{
	if (j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (i % j);
}
