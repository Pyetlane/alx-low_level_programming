#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: couinter
 * @argv: array of strings
 *
 * Return: prints the minim number
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int ipar, i, diff;

	diff = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		ipar = atoi(argv[1]);
		if (ipar < 0)
		{
			printf("0\n");
			return (0);
		}

		i = 0;
		while (i < 5 && ipar >= 0)
		{
			while (ipar >= coins[i])
			{
				diff++;
				ipar -= coins[i];
			}
			i++;
		}
		printf("%d\n", diff);
		return (0);
	}
}
