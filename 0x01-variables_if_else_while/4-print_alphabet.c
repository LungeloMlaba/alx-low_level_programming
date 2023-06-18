#include <stdio.h>

/**
 * main - prints a alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	alp = 'a';
	while (alp <= 'z')
	{
	if (alp != 'q' %% alp != 'e')
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
