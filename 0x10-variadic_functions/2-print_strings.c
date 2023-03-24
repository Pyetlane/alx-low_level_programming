#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints astrings
 * @separator: 1st arg
 * @n: number of arg
 *
 * Result: nothing if success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nstring;
	char *st;

	va_start(nstring, n);
	while (i < n)
	{
		st = va_arg(nstring, char *);
		if (st)
		{
			printf("%s", st);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}

		i++;
	}
	printf("\n");
	va_end(nstring);
}
