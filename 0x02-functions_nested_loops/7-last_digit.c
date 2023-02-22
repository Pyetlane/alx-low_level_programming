#include "main.h"
/**
 * print_last_digit - prints last digit
 * @a: parameter for function
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
