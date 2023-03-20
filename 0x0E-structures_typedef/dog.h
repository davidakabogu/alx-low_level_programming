#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef new name for the type struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - this structures holds the variables for
 *		describing a dog.
 * @name: this is the name of the dog.
 * @age: this is the age of the dog.
 * @owner: this is the name of the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif