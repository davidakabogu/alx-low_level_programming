#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	char password[84];
	int i = 0, sum = 0, diffhalf1, diffhalf2;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	if (sum != 2772)
	{
		diffhalf1 = (sum - 2772) / 2;
		diffhalf2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diffhalf1++;

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + diffhalf1))
			{
				password[i] -= diffhalf1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + diffhalf2))
			{
				password[i] -= diffhalf2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}
