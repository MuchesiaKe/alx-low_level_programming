#include <stdio.h>

/**
*main - prints all single digit numbers of base 10
*Return: Always (0)
**/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar('0' + x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
