#include "main.h"
/**
 * reverse_array - reverse the content
 * @a: 1st integer
 * @n: second integer
 *
 * Return: reverssed array
 */
void reverse_array(int *a, int n)
{
	int i, itemp;

	for (i = 0; i < n--; i++)
	{
		itemp = a[i];
		a[i] = a[n];
		a[n] = itemp;
	}
}
