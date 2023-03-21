#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates memory
 * @ptr: pointer
 * @old_size: 2nd parameter
 * @new_size: 3rd parameter
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1, *p2;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}

	p1 = malloc(new_size);
	if (!p1)
	{
		return (NULL);
	}

	p2 = ptr;
	if (new_size < old_size)
	{
		i = 0;
		while (i < new_size)
		{
			i++;
		}
	}
}
