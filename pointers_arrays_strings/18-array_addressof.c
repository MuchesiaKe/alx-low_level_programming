#include <stdio.h>

/**
*main - prints the address an array
*
*Return: Always 0
*/

int main(void)
{
	char b[98];

	printf("b: %p\n", b);
	printf("&b: %p\n", &b);
	return (0);
}
