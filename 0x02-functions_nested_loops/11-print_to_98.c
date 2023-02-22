#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: parameter
 *
 * Return: natural numbers
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
}
