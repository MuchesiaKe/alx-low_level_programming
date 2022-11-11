#include <stdio.h>

/**
*main - counts spaces, tabs and newline
*Return: Always (0)
*/

int main(void)
{
	int c;
	int space, tabs, lines;

	space = tabs  = lines = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			space++;
		else if (c == '\t')
			tabs++;
		else if (c == '\n')
			lines++;
	}
	printf("\nSpaces = %d\nTabs = %d\nNewlines = %d\n", space, tabs, lines);
	return (0);
}
