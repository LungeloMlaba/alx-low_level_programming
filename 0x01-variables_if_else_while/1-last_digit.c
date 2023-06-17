#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determines last digits 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnumber = n % 10;
	if (lastnumber > 5)
		printf("Last digit of %d is %d and is greator 
				than 5\n",n ,lastnumber);
	else if (lastnumber == 0)
		printf("Last digit of %d is %d and is 
				0\n",n , lastnumber);
	else 
		printf("Last digit %d is %d and is 
				less than 6 and is not 0\n", n , lastnumber);
	return (0);
}
