#include <stdio.h>

/**
 * main - prints the sum of even fibonacci num
 * Return: 0
 */

int main(void)
{
	int a = 0;
	long b = 1, c = 2, sum = c;

	while (b + c < 4000000)
	{
	c += b;
	if (c % 2 == 0)
	++a;
	}
	printf("%ld\n", sum);
	return (0);
}
