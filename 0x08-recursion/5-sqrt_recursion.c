#include "main.h"
int natural(int n, int guess);
/**
 * _sqrt_recursion - computes a square root
 * @n: input
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (natural(n, 0));
	}
}

/**
 *  natural  - guess the natural numberr
 * @n: 1st input
 * @guess: 2nd parameter than guesses the number
 * Return: natural number if passes otherwise -1
 */
int natural(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	else if (guess * guess == n)
	{
		return (guess);
	}
	return (natural(n, guess + 1));
}
