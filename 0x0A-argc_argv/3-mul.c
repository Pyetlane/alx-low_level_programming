#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counter
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mult;

	i = 1;
	mult = 1;
	while (i < argc)
	{
		mult = mult * strtol(argv[i], NULL, 10);
		i++;
	}
	printf("%d\n", mult);
	return (0);
}
