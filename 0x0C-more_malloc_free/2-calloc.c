#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memry with constant bytes
 * @s: memory area
 * @b: character to copy
 * @n: number of times to copy
 *
 * Return: ponter to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocate memory
 * @nmemb: number of elements in array
 * @size: size of array
 *
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	*_memset(ptr, 0, nmemb * size);
