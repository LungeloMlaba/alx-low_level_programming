#include <stdio.h>
/**
 * main - prints all the numbers of base 16.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char q;
	int s;

	q = 'a';
	s = 0;

	while (s < 10)
	{
		putchar(s + '0');
		s++;
	}
	while (q <= 'f')
	{
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
