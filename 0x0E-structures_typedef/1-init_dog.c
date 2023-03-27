#ifndef INIT_DOG_H
#define INIT_DOG_H
#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: pointer to truct dog
 * @name: 1st parameter
 * @age: 2nd parameter
 * @owner: 3rd parameter
 *
 * Return: nothing
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
#endif
