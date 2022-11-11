#include <stdio.h>

/**
*main - prints input one word per line
*Return: Always (0)
*/

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t')
			c = '\n';
		putchar(c);
	}
	return (0);
}
