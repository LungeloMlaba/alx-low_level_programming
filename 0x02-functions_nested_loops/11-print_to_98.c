#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from input to 98
 * @q: the starting number
 */
void print_to_98(int q)
{
	if (q >= 98)
	{
		while (q > 98)
			printf("%d, ", q--);
		printf("%d\n", q);
	}
	else
	{
		while (q < 98)
			printf("%d, ", q++);
		printf("%d\n", q);
	}
}
