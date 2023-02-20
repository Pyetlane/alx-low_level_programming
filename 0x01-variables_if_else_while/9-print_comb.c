#include<stdio.h>
/**
 * main - entry point
 * Description: printing possible combinations
 * Return: 0 when done
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('$');
	return (0);
}
