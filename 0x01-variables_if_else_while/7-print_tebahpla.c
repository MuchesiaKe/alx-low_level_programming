#include <stdio.h>

/**
*main - prints alphabet in lowercase and uppercase
*Return: Always (0) for success
**/

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
