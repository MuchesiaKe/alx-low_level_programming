#include "main.h"

/**
*puts_half - print second half of the string
*@str: string to be printed
*/

void puts_half(char *str)
{
	int i, length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if (length % 2 == 1)
	{
		for (i = (length - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = length / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
