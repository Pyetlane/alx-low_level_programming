#include "main.h"
/**
 * _islower - checks lowercase character
 * @c: integer parameter
 *
 * Description: Takes integer as an argurment
 * Return: 1 if c and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

