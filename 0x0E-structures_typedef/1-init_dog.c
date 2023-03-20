#include "dog.h"

/**
 * init_dog - this function initializes a variable of type struct dog
 * @d: variable to initialize.
 * @name: this is the name of the dog.
 * @age: this is the age of the dog.
 * @owner: this is the name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
