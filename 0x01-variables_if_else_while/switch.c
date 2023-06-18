#include <stdio.h>

/**
 * main - Print class
 * Return: Always 0 (success)
 */
int main(void)
{
	char Class;

	printf("Enter your class");
	scanf("%c", Class);

	switch (Class)
	case 'A':
		printf("You are a brilliant student");
		break;
	case 'B':
		printf("You are inteligent");
		break;
	case 'C':
		printf("You are standard");
		break;
	default:
		printf("Try again");

	return (0);
}
