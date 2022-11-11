#include <stdio.h>

/**
*main - count number of lines
*Return: Always (0)
*/

int main(void)
{
	int count, c;

	count = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			count++;
	}
	printf("\nTotal number of lines = %d\n", count);
}
