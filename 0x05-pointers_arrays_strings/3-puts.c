#include "main.h"
/**
 * _puts - prints a string
 * @str: parameter of _puts
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	}
	_putchar('\n');
}
