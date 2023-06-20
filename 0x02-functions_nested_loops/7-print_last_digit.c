#include "main.h"

/**
 * print_last_digit - Prints the last digit of a num
 * @x: The num to be treated.
 * Return: Value of the last digit of a num
 */

int print_last_digit(int x)
{
	int last;

	last = x % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
