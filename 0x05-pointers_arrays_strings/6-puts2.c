#include "main.h"
#include <stdio.h>

/**
*puts2- prints every other character of a string
*@str: the string to be printed
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			printf("%c", ('0' + i));
	}
	printf("\n");
}
