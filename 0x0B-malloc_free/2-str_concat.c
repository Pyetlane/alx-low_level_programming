#include "main.h"
#include <stlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: second string
 *
 * Return: concatenated pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *s;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
        {
                len2++;
        }
	*s = malloc(sizeof(char) * (len1 + len2));


}
