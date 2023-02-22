#include "main.h"
/**
 * _isalpha - checks alphabetical character
 * @c: integer parameter of _isalpha
 *
 * Return: 1 if c is a letter, lowercase or uppercase otherise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
