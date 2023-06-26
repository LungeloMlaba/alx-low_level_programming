#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: int to be swapped
 * @b: int two to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int qwer = *a;
	*a = *b;
	*b = qwer;
}
