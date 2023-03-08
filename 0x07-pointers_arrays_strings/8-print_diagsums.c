#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals
 * @a: first parametr
 * @size: second parameter
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, add1, add2;

	i = 0;
	add1 = 0;
	add2 = 0;
	while (i < size)
	{
		add1 = add1 + a[i * size + i];
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		add2 += a[i * size + (size - i - 1)];
		i--;
	}
	printf("%d, %d\n", add1, add2);
}
