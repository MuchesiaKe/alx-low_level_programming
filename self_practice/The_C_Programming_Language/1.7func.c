#include <stdio.h>

/**
*main - tests the power function
*Return: Always (0)
*/

int power(int base, int n);

int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));
	return (0);
}

/**
*power - raise base n-th power; n >= 0
*@base: number to be raised
*@n: power
*Return: power
*/

int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return (p);
}
