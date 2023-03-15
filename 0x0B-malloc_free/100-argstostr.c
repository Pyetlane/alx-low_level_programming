#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguements ofstring
 * @ac: 1st parametrer (counter)
 * @av: double array parameter
 *
 * Return: concaternated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, m, n;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	i = 0;
	m = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			m++;
			j++;
		}
		i++;
	}
	m += ac;

	n = 0;
	s = malloc(sizeof(char) * m + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				s[n] = av[i][j];
				n++;
				j++;
			}
			if (s[n] == '\0')
			{
				s[n++] = '\n';
			}
			i++;
		}
	}

	return (s);
}
