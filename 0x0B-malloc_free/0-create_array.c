#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arry of chars
 * @size: unsigned parameter
 * @c: second parametr
 *
 * Return: NULL if 0 chars or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;
		}
	}
	return (s);
}
