#include "main.h"

/**
*puts_half - prints half of a string
*
*@str: string to print half
*/

void puts_half(char *str)
{
	int i, len, n;

	len = n = 0;
	for (i = 0; str[i] != 0; i++)
		len++;

	if ((len % 2) != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
