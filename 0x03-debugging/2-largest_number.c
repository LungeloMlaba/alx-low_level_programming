#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @q: The first int
 * @w: The second int
 * @e: The third int
 * Return: The largest number
 */
int largest_number(int q, int w, int e)
{
	int largest;

	if (q > w && q > e)
	{
		largest = q;
	}
	else if (q > w && e > q)
	{
		largest = e;
	}
	else if (w > e)
	{
		largest = w;
	}
	else
	{
		largest = e;
	}
return (largest);
}
