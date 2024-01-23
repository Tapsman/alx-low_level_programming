#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * init_dog - A function that initializes a dog
 * @d: Pointer to the dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
