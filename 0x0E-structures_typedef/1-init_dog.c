#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 * @d: structure of a dog.
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog.
 *
 * Return: Nothing
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
