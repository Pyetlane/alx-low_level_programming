#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followd ny line
 * @separator: 1st par
 * @n: 2nd parameter
 *
 * Return: nothing when succed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nlist;
	unsigned int count = 0;

	va_start(nlist, n);
	while (count < n)
	{
		printf("%d", va_arg(nlist, int));
		if (count != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		count++;
	}
	printf("\n");
	va_end(nlist);
}
