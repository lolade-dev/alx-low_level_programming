#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Entry point
 * @d: struct dog
 * @name: name string
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*
	*d = malloc(sizeof(struct dog));
	*if (d == NULL)
	*	return (NULL);
	*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
