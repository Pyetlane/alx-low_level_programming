#include <stdio.h>
/**
 * main - entry point
 * Description: Alphabets in low and big cases
 * Return: 0 when complete
 */
int main(void)
{
	char alphBET[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphBET[i]);
	}
	putchar('\n');
	return (0);
}
