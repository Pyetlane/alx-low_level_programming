#include <stdio.h>
/**
 * print_alphabet function printing alphabet
 * Description: function main uses functionprint_alphabet to print
 * Return: 0 for success
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
/**
 * main - entry point
 *
 * Return: 0 when succesful
 */
int main(void)
{
	print_alphabet;
	return (0);
}
