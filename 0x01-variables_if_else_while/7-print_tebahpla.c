#include <stdio.h>
/**
 * main - prints alphabets in reverse.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char p;

	p = 'z';

	while (p >= 'a')
	{	putchar(p);
	p--;
	}
	putchar('\n');
	return (0);
}
