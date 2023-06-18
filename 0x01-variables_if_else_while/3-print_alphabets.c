#include <stdio.h>

/**
 * main - prints a alphabet in lowercase and uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	char alp2;

	alp = 'a';
	alp2 = 'A';
	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (alp <= 'Z')
	{	putchar(alp2);
		alp2++;
	}
	putchar('\n');
	return (0);
}
