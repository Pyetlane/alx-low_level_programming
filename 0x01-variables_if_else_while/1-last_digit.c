#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 * Description: last digit
 * Return: 0 if all done
 */
int main(void)
{
	int n, dlast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	dlast = n % 10;
	if (dlast > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, dlast);
	else if (dlast == 0)
		printf("Last digit of %d is %d and is 0\n", n, dlast);
	else if ((dlast < 6) && (dlast != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dlast);
	return (0);
}
