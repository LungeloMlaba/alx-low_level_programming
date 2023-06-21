#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int num, multiply, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiply = 1; multiply <= 9;
				multiply++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num + multiply;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
