#include <stdio.h>

#define IN 1
#define OUT 0

/**
*main - count lines, words, and characters input
*Return: Always (0)
*/

int main(void)
{
	int c, n1, nw, nc, state;

	state = OUT;
	n1 = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++n1;
		else if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("\nCharacters = %d\nWords = %d\nLines = %d\n", nc, nw, n1);
}
