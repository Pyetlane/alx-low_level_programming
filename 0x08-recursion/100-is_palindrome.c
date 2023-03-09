#include "main.h"
int determin(char *s, int count, int length);
int _strlen_recursion(char *s);
/**
 * is_palindrome - determine a palindrome
 * @s: input string
 *
 * Return: 1 or 0;
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (determin(s, 0, _strlen_recursion(s)));
}
/**
 * determin - checks the palindrome
 * @s: string to check
 * @count: counter
 * @length: length of string
 * Return: 0 or 1;
 */
int determin(char *s, int count, int length)
{
	if (*(s + count) != *(s + length - 1))
	{
		return (0);
	}
	else if (count >= length)
	{
		return (1);
	}
	return (determin(s, count + 1, length - 1));
}
/**
 * _strlen_recursion - returns length of string
 * @s: input
  * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
