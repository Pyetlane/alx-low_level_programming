#include <stdio.h>
/**
 * main - Entry point
 * Description: Reverse lowecase
 * Return: 0 when done
 */
int main(void)
{
	char alph;

	alph = 'z';
	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
