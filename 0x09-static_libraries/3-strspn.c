#include "main.h"
/**
 * _strspn - gets length of prefix
 * @s: 1st paramter
 * @accept: second parameter
 *
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i = 0;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
			j++;
		}
		s++;
	}
	return (0);
}
