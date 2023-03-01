#include "main.h"
/**
 * swap_int - swaps values of integers
 * @a: first parameter
 * @b: second parameter
 * Return: swapped integers
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
