#ifndef FREE_DOG_H
#define FREE_DOG_H
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees space on heap
 * @d: dog structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
#endif
