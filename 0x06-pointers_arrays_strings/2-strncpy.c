#include "main.h"

/**
 * _strncpy - Copies an inputted number of bytes from string to dest.
 * @dest: the buffer storing the string copy.
 * @src: the source string.
 * @n: the maximun num of bytes to be copied from ssrc.
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
