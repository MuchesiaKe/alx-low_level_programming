#include <stdio.h>

/**
*main - test code
*Return: Always (0)
*/

int main(void)
{
	int n = 98;
	int *p = &n;

	printf("%d\n", *p++);
	return (0);
}
