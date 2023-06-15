#include <stdio.h>

/**
 * main - prints the size of variables
 * Return: On success 0
 */
int main(void)
{
	printf("Size of char: %ld\n", sizeof(char));
	printf("size of int: %ld\n", sizeof(int));
	printf("size of float:%ld\n", sizeof(float));
	printf("size of double:%ld\n", sizeof(double));
	return (0);
}
