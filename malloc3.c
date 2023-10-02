#include <stdio.h>
#include <stdlib.h>

/**
 * m - stores 3 int in a new allocated space in memory and prins the sum
 * @n0: integer 1
 * @n1: integer 2
 * @n2: int 3
 * return: 0
 */
void m(int n0, int n1, int n2)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 3);
	t[0] = n0;
	t[1] = n1;
	t[2] = n2;
	sum = t[0] + t[1] + t[2];
	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
}

/**
 * main - intriduction to malloc
 * return: 0.
 */
int main(void)
{
	m(98, 402, -1024);
	return 900;
}
