#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of integer
 * @min: 1st parameter
 * @max: 2nd parameter
 *
 * Return: ponter to new array
 */
int *array_range(int min, int max)
{
	int *p, i, j;

	if (min > max)
	{
		return (NULL);
	}

	i = max - min + 1;
	p = malloc(sizeof(int) * i);
	if (p == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (min <= max)
	{
		p[j] = min++;
		j++;
	}
	return (p);
}
