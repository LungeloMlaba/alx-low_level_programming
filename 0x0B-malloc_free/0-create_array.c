#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: the bsize of array
 * @c: characters to print
 * Return: array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *q;

	if (size == 0)

	return (NULL);

	q = malloc(size * sizeof(char));

	if (q == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		q[a] = c;
	}
	return (q);
}
