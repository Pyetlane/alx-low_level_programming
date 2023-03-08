#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: input
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		i = i + 1;
		_strlen_recursion(s + 1);
	}
	return (i);
}
