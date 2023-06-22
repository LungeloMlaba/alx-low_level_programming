#include "main.h"

/**
 * _isdigit - Checks if char is a digit
 * @q: The num to be checked
 * Return: 1 for char that will be a digit or 0 for anything
 */
int _isdigit(int q)
{
	if (q >= 48 && q <= 57)
	{
		return (1);
	}
	return (0);
}
