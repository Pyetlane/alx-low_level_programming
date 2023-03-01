#include "main.h"
/**
 * rev_string - reverse string
 * @s: string parameter
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char store;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;
	while (j < i)
	{
		store = s[i];
		s[i] = s[j];
		s[j] = store;
		j++;
		i--;
	}
}
