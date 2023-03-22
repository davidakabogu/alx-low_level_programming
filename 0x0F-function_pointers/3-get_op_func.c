#include "3-calc.h"

/**
 * get_op_func - this function selects the correct function
 *		to perform the arithmetic operation asked by the user.
 * @s: this is the character operator.
 * Return: returns a pointer to the function that corresponds to the operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{0, 0}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
		{
			break;
		}
		i++;
	}
	return (ops[i / 2].f);
}
