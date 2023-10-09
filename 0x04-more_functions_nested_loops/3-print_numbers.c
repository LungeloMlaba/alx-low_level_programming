#include "main.h"

/**
 * print_numbers - Print the nums from 0 to 9
 * Return: The nums from 0 to 9
 */
void print_numbers(void)
{
	int q;

	for (q = 0; q <= 9; q++)
	{
		_putchar(q + '0');
	}
	_putchar('\n');
}
