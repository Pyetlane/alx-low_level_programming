#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: 1st parametr
 * @s2: 2nd parameter
 * @n:3rd iunterer parameter
 *
 * Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sconc;
	int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1[l1])
	{
		l1++;
	}
	while (s2[l2])
	{
		l2++;
	}
	if (n < l2)
	{
		sconc = malloc(sizeof(char) * (l1 + n + 1));
	}
	else
	{
		sconc = malloc(sizeof(char) * (l1 + l2 + 1));
	}

	if (!sconc)
	{
		return (NULL);
	}

	while (i < l1)
	{
		sconc[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + l2))
	{
		sconc[i++] = s2[j++];
	}
	while (n >= l2 && i < (l1 + l2))
	{
		sconc[i++] = s2[j++];
	}
	sconc[i] = '\0';
	return (sconc);
}
