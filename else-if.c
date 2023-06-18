#include <stdio.h>

int main(void)
{
	int age;

	printf("Enter your age: ");
	scanf( "%d" , &age );
	if (age < 100 ) {
		printf("You are young\n");
	}
	else if (age == 100 )
	{	printf("You are old\n");
	}
	else 
	{	printf("You still old\n");
	}
	return 0;
}
