#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	char a = 'a';
	char b = 'z';

	for (char a <= b; a++)
		putchar(a);

	putchar('\0');
	return (0);
}
