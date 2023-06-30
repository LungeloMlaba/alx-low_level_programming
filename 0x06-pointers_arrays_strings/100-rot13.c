#include "main.h"

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ
		abcdefghijklmnopqrstuvwxyz";
 	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ
