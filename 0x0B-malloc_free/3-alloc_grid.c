#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns pointer to a 2-d arry
 * @width: 1stparametr
 * @height:second parameter
 *
 * Return: a pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		array = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			i = i - 1;
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}

		i++;
	}
	j = 0;
	while (j < width)
	{
		array[i][j] = 0;
		j++;
	}
	return (array);
}
