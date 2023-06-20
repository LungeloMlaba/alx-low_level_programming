#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @p: The number checked.
 * Return: Always 1 for positive number, -1 for nedative number or zero
 */

int print_sign(int p)
{
	if (p > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (p < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
