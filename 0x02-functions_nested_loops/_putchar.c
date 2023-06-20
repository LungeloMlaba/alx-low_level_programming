#include "main.h"
#include <unistd.h>

/**
 *
 * _putchar - Writes the char c to stdout
 * @c: the character to print
 *
 * Return: Always 1 (Success)
 * on error , -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
