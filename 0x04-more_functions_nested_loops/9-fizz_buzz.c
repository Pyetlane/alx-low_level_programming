#include <stdio.h>
/**
 * main - prints numbers anf fizzbuzz
 *
 * Return: numbers and fizz buzz
 */
int main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
				printf(" ");
			}
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		printf("%d ", i % 100);
		i++;
	}
}
