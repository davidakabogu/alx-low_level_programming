#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - this function converts a char to an int
 * @x: parameter to be passsed
 * Return: returns an int
 **/

int _atoi_digit(char x)
{
	unsigned int i;

	if (x <= '9' && x >= '0')
	{
		i = x - '0';
	}
	return (i);
}

/**
 * _isNumber - this function checks if a string is a number.
 * @argv: ARGument Vector
 * Return: returns 0
 **/

int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		if (argv[i] < 48 || argv[i] > 57)
		{
			return (1);
		}
	}
	return (0);
}

/**
 *_calloc - this function allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 * Return: pointer to array or NULL if it fails
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (0);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = '0';

	return (ptr);
}

/**
 * mul_array - this function multiplies two arrays.
 * @a1: first array.
 * @len1: length of array a1.
 * @a2:  char.
 * @a3: array for result.
 * @lena: length of array a3.
 * Return: pointer to array.
 **/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, i, j;

	j = lena;
	for (i = len1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[j] - '0');
		a3[j] = (mul % 10) + '0';
		mul /= 10;
		j--;
	}
	while (mul != 0)
	{
		mul += a3[j] - '0';
		a3[j] = (mul % 10) + '0';
		mul /= 10;
		j--;
	}
	return (a3);
}

/**
 * print_array - this function prints all the digits of an array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/

void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *ptr;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	lenres = len1 + len2;
	ptr = _calloc(lenres, sizeof(int));
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	for (i = len2 - 1, c = 0; i >= 0; i--)
	{
		ptr = mul_array(argv[1], len1, argv[2][i], ptr, (lenres - 1 - c));
		c++;
	}

	print_array(ptr, lenres);
	free(ptr);
	exit(EXIT_SUCCESS);
	return (0);
}
