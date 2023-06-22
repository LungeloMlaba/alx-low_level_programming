#include "main.h"

/**
 * print_triangle - prints a triangle of squares according parameter
 * @size: The size of the square triangle
 * Return: empty
 */
void print_triangle(int size)
{
	int q, w, e;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (q = 0; q < size; q++)
		{
			for (w = size - q; w > 1; y--)
			{
				_putchar(32);
			}
			for (e = 0; e <= q; e++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
