#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - this function creates a new struct dog
 * @name: this is the name of the dog
 * @age: this is the age of the dog
 * @owner: this is the name of the owner of the dog
 * Return: returns a pointer to the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, iname, iowner;
	dog_t *ptr;

	for (iname = 0; name[iname] != '\0'; iname++)
		;
	for (iowner = 0; owner[iowner] != '\0'; iowner++)
		;

	ptr = malloc(sizeof(ptr));
	if (ptr == 0 || !(name) || !(owner))
	{
		free(ptr);
		return (ptr);
	}

	ptr->name = malloc(iname + 1);
	ptr->owner = malloc(iowner + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
	}

	for (i = 0; i < iname; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->name[i] = '\0';

	for (i = 0; i < iowner; i++)
	{
		ptr->owner[i] = owner[i];
	}
	ptr->owner[i] = '\0';
	ptr->age = age;
	return (ptr);
}
