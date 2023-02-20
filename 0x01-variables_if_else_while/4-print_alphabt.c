#include <stdio.h>
/**
 * main - Entry point
 * Description: printing lower case  alphabets
 * Return: 0 when complete
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
