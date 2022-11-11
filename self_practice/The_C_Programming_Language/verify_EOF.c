#include <stdio.h>

/**
*main - verify  that EOF is either 1 or 0
*@argc:  number of arguements passed
*@argv: array of arguements passed
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	int c;

	while ((c = getchar()) != EOF)
	{
		printf("%d", c != EOF);
		putchar(c);
	}
	printf("\n%d\n", c != EOF);
}
