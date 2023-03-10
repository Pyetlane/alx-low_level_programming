#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: counter
 * @argv: array of strings
 *
 * Return: addition
 */
int main(int argc, char *argv[])
{
	int i, add;

	i = 1;
	add = 0;
	if (i == argc)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			add = add + strtol(argv[i], NULL, 10);
			i++;
		}
		printf("%d\n", add);
	}

	return (0);
}
