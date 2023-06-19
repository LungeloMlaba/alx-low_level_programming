#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int f;
	int e = 0;

	while (e < 10)
	{
		f = 0;
		while (f < 10)
		{
			c = 0;
			while (c < 10)
			{
			if (c != f && f != e && e < f && f < c)
			{
				putchar('0' + e);
				putchar('0' + f);
				putchar('0' + c);

				if (c + f + e != 9 + 8 + 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		f++;
	}
	e++;
	}
	putchar('\n');
	return (0);
}
