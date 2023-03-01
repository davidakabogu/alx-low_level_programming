#include "main.h"

/**
 * string_toupper - This function changes all lowercase to uppercase
 *
 * @s: parameter to be passed
 *
 * Return: returns a character
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a' - 'A';
		}

		i++;
	}

	return (s);
}
