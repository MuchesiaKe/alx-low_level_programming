#include <stdio.h>

/**
*main - replaces invisible characters with escape characters
*Return: Always (0)
*/

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			c = "\t";
		else if (c == '\b')
			c = "\b";
		else if (c == '\\')
			c = "\\";
		putchar(c);
	}
	return (0);
}
