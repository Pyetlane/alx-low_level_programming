#include "main.h"
/**
 * more_numbers - printing more numbers
 *
 * Return: 10 times numbers
 */
void more_numbers(void)
{
	int i, j;
	
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
			else
				_putchar(j + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
