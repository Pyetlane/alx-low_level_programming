#include "main.h"
/**
 * print_sign - prints sign
 * @n: parameter of print_sign
 *
 * Return: 1, zero 0 and -1 depending on n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
