#include "main.h"
int calc(int n, int count);
/**
 * is_prime_number - checks if prime number
 * @n: input
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (calc(n, n - 1));
	}
}
/**
 * calc - determines the prime
 * @n: given input
 * @count: second parameter to count
 * Return: 1 or 0
 */
int calc(int n, int count)
{
	if  (count == 1)
	{
		return (1);
	}
	else if (n % count == 0 && count > 0)
	{
		return (0);
	}
	return (calc(n, count - 1));
}
