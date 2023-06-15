#include <stdio.h>

/**
 * main - prints the size of variables
 * Return: On success 0
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("size of an int: %ld bytes(s)\n", sizeof(int));
	printf("size of a float:%ld bytes(s)\n", sizeof(float));
	printf("size of a double:%ld bytes(s)\n", sizeof(double));
	printf("size of a long int:%ld bytes(s)\n", sizeof(long int));
	printf("size of a long long int:%ld bytes(s)\n", sizeof(long long int));
	return (0);
}
