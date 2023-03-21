#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - malloc to locate memory
 * @b: integer parameter
 *
 * Return: return 98 when fails
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
