#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 *
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (n_dog != NULL)
		n_dog->name = name;
		n_dog->age = age;
		n_dog->owner = owner;
	return (n_dog);
}
