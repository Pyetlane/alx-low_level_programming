#include <stdio.h>
/**
 * main - entry point
 * @argc: cpunter
 * @argv: array of strings
 *
 * Return: nothings
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
