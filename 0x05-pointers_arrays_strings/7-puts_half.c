#include "main.h"
/**
 * puts_half - priniting half string
 * @str: string argument
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;
	if (i % 2 == 0)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
