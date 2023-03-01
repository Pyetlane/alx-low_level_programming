#include "main.h"
/**
 * print_rev - reverse string
 * @s: char parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
