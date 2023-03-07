#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: first input
 * @needle: second parameter
 *
 * Return: pointer of location
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
