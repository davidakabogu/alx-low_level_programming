#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - this function prints a struct dog.
 * @d: pointer to struct dog.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->age)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}

		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
