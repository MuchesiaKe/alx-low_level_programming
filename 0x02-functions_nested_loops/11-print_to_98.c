#include "main.h"

/**
*print_to_98 - prints natural numbers to 98
*@n: starting point
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	printf("\n");
	}

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	printf("\n");
	}
}
