#include "main.h"
/**
 * _memcpy - copies the memory data
 * @dest: 1st parameter (pointer)
 * @src: 2nd parametr (pointer)
 * @n: 3rd parameter interger
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
