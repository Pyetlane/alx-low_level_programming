#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a grid
 * @grid: 2-D array input
 * @height: wnd input
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
