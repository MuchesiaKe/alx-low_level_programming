#include "main.h"

/**
*puts_half- prints half of the string followed by a new line
*
*@str: String to be printed in half
*
*/

void puts_half(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
