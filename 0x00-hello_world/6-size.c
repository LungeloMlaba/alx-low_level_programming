#include <stdio.h>

/**
 * main - prints the size of variables
 * Return: On success 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a float:%ld byte(s)\n", sizeof(float));
	printf("size of a double:%ld byte(s)\n", sizeof(double));
	printf("size of a long int:%ld byte(s)\n", sizeof(long int));
	printf("size of a long long int:%ld byte(s)\n", sizeof(long long int));
	return (0);
}
