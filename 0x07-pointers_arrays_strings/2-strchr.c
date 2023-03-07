#include "main.h"
/**
 * _strchr - locates a charcter in string
 * @s: pointer to charcter
 * @c: second parameter
 *
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			return(&s[i]);
		}
		i++;
	}
	return (0);
}
