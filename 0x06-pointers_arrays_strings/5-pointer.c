#include <stdio.h>

/**
*main- illustrate pointer arithmetic
*
*Return: Always 0
*/

int main(void)
{
	int a[5];
	int *p;
	int *p2;
	int i;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;

	for (i = 0; i < 5; i++)
		printf("Before reassignment, value of a[%d] is: %d\n", i, a[i]);
	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;
	for (i = 0; i < 5; i++)
		printf("After expressions, value of a[%d] is: %d\n", i, a[i]);
	return (0);
}
