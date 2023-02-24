#include "main.h"
/**
 * print_square - square printed
 * @size: parameter
 *
 * Return: printed square
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
