#include <stdio.h>

/**
*main - prints alphabet in lowercase and uppercase
*Return: Always (0) for success
**/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
