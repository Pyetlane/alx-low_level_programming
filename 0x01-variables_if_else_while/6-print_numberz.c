#include<stdio.h>
/**
 * main - Entry point
 * Description: printing diits
 * Return: 0 if complete
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{	putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
