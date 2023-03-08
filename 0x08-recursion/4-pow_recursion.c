#include "main.h"
/**
 * _pow_recursion - returns power
 * @x: first input
 * @y: second parameter
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x + x, y - 1));
	}
}
