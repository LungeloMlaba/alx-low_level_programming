#include "main.h"

/**
 * print_alphabet_x10 - make alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 10;

	while (i == 10)
	{
		_putchar(i);
	}
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c + '9');

			_putchar('\n');
			i++;
	}
}
