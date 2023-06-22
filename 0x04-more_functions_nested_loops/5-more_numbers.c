#include "main.h"

/**
 * more_numbers - print 10 times the numbers since 0 up to 14
 * Return: 10 times of the numbers since 0 up to 14
 */
void more_numbers(void)
{
	int q, w;

	for (q = 0; q < 10; q++)
	{
	for (w = 0; w <= 14; w++)
	{
	if (w > 9)
	{
		_putchar((w / 10) + '0');
	}
	_putchar((w % 10) + '0');
	}
	_putchar('\n');
	}
}
