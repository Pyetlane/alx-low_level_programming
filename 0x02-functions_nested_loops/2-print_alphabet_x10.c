#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10times
 *
 * Return: 0 when success
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;
	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}
