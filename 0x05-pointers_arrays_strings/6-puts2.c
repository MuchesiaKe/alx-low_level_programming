#include "main.h"

/**
*puts2 -prints alternate character of str starting with the first character
*@str: string to pring alternate characters
**/

void puts2(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (i % 2 == 1)
		{
			i++;
			str++;
			continue;
		}
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
