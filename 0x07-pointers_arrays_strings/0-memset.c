#include "main.h"
/**
 * _memset - fills the memory with byte
 * @s: 1st parameter(pointer)
 * @b: second character
 * @n: integer parameter
 *
 * Return: a pointer to memery of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
