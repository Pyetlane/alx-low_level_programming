#include "main.h"
/**
 * _strpbrk - searhes a string
 * @s: 1st input
 * @accept: second parameter
 *
 * Return: returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return ('\0');
}
