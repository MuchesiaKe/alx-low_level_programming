#include <stdio.h>

/**
*main - count digits, white space and others
*Return: Always (0)
*/

int main(void)
{
	int white, others, i, c;
	int digit[10];

	white = others = i = 0;
	for (i = 0; i < 10; i++)
		digit[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			++digit[c - '0'];
		}
		else if (c == ' ' || c == '\t' || c == '\n')
			++white;
		else
			++others;
	}

	printf("\nWhitespaces = %d\n Others = %d \n Digits = ", white, others);
	for (i = 0; i < 10; i++)
		printf("%d ", digit[i]);
	printf("\n");
	return (0);
}
