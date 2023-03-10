#include <stdio.h>
/**
 * main - entry point
 * @argc: counter
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i <= argc)
	{
		return (*argv[i] * *argv[i + 1]);
		i++;
	}
	return (0);
}
