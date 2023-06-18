#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 * main - prints the last digit of a number.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n = n % 10;
	n = n % 100;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greator than 5\n", n, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
	}


	return (0);
}
