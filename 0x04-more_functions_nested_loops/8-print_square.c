#include "main.h"

/**
 * print_square - Print the n squares according n square of times
 * @size: The number of squares/number of times
 * Return: empty
 */
void print_square(int size)
{
	int q, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (q = 0;  q < size; q++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
