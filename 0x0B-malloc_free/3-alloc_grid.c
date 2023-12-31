#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested lopps to make grid
 * @width: input value
 * @height: input value
 * Return: On success 1
 */

int **alloc_grid(int width, int height)
{
	int **wee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	wee = malloc(sizeof(int *) * height);

	if (wee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		wee[x] = malloc(sizeof(int) * width);
		if (wee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(wee[x]);

			free(wee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			wee[x][y] = 0;
	}
	return (wee);
}
