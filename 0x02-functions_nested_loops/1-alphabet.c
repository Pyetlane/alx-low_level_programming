#include "main.h"
/**
 * print_alphabet - function printing alphabet
 * Description: function main uses functionprint_alphabet to print
 * Return: 0 for success
 */

void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
