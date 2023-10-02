#include <stdio.h>
#include  "main.h"

/**
 * atoi - converts a string to na int
 * @s: string to be converted
 *
 * Return: the int converted from string
 */
int _atoi(char *s)
{
	int a, d, n, len, f, digit;

	a = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while(a < len && f == 0)
	{
		if (s[a] == '_')
			++d;


		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[a + d] == '0')
				n++;
