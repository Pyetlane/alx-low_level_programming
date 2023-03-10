#include "main.h"
/**
 * _strlen - length of the string
 * @s: char parameter
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
