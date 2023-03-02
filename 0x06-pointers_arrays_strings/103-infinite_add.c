#include "main.h"

/**
 * infinite_add - This function adds two numbers.
 *
 * @n1: parameter to be passed
 * @n2: parameter to be passed
 * @r: the buffer the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: returns a pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, o;

	i = 0, j = 0, o = 0;

	while (n1[i] != '\0')
	{
		i++;
	}

	while (n2[j] != '\0')
	{
		j++;
	}

	if (i >= j)
	{
		l = i;
	}

	else
	{
		l = j;
	}

	if (size_r <= l + 1)
	{
		return (0);
	}

	r[l + 1] = '\0';
	i--, j--, size_r--;

	m = n1[i] - 48, n = n2[j] - 48;

	while (l >= 0)
	{
		k = m + n + o;

		if (k >= 10)
		{
			o = k / 10;
		}

		else
		{
			o = 0;
		}

		if (k > 0)
		{
			r[l] = (k % 10) + 48;
		}

		else
		{
			r[l] = '0';
		}

		if (i > 0)
		{
			i--, m = n1[i] - 48;
		}

		else
		{
			m = 0;
		}

		if (j > 0)
		{
			j--, n = n2[j] - 48;
		}

		else
		{
			n = 0;
		}

		l--, size_r--;
	}

	if (*(r) == '0')
	{
		return (r + 1);
	}

	else
	{
		return (r);
	}
}
