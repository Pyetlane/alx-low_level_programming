#include "main.h"
/**
 * times_table - prints time table
 *
 * Return: multiples of nine
 */
void times_table(void)
{
	int i, j, multiple;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			multiple = i * j;
			_putchar(multiple + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
