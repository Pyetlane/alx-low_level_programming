#include "main.h"
/**
 * is_prime_number - checks if prime number
 * @n: input
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n % is_prime_number(n - 1) == 0 )
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
