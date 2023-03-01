#include "main.h"

/**
 * cap_string - This function capitalizes all the words in a string
 *
 * @s: parameter to be passed
 *
 * Return: returns a string
 */

char *cap_string(char *)
{
	int i = 0, j;
	char a[] = "\t\n,;.!?\"(){}";

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 'a' - 'A';
			}

			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[i] == *(s + i - 1))
					{
						s[i] -= 'a' - 'A';
					}
				}
			}
		}

		i++;
	}

	return(s);
}