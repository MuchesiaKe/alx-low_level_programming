#include "main.h"
#include <stdio.h>

/**
*print_rev - prints string in reverse
*@s: string to be reversed
*/

void print_rev(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
