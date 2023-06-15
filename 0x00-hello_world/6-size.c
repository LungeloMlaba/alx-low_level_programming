#include <stdio.h>

/**
 * main - prints the size of variables
 * Return: On success 0
 */
int main(void)
{
	printf("Size of char: %ld bytes(s)\n", sizeof(char));
	printf("size of int: %ld bytes(s)\n", sizeof(int));
	printf("size of float:%ld bytes(s)\n", sizeof(float));
	printf("size of double:%ld bytes(s)\n", sizeof(double));
	printf("size of long int:%ld bytes(s)\n", sizeof(long int));
	printf("size of long long int:%ld bytes(s)\n", sizeof(long long int));
	return (0);
}
