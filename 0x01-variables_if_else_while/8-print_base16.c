#include<stdio.h>
/**
 * main - entry point
 * Description: Base 16 printing
 * Return: 0 always
 */
int main(void)
{
	int i;
	char alph;

	i = 0;
	alph = 'a';
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (alph < 'g')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
