#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns pointer to new space
 * @str: parameter
 *
 * Return: Null if strings is NULL
 */
char *_strdup(char *str)
{
	int i, len;
	char *sc;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = 0;
		while (str[len] != '\0')
		{
			len++;
		}
		sc = malloc(sizeof(char) * len);
		if (sc == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;
			while (i < len)
			{
				sc[i] = str[i];
				i++;
			}
		}
		return (sc);
	}
}
