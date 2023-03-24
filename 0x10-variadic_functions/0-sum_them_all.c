#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - sum of all parameters
 * @n: parameter
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nlist;
	unsigned int i = 0;
	int add = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(nlist, n);
	while (i < n)
	{
		add += va_arg(nlist, int);
		i++;
	}
	va_end(nlist);
	return (add);
}
