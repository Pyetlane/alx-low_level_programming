#include "main.h"
/**
 * print_line - prints a line
 * @n: parameter of printing lines
 *
 * Return: n lines
 */
void print_line(int n)
{
	int i;
	
	i = 0;
	while (i < n + 1)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
