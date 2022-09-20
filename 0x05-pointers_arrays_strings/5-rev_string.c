#include "main.h"

/**
*rev_string - reverses a string
*
*@s: string to be reversed
*/


void rev_string(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = (len - 1); i >= 0; i--)
		_putchar(s[i]);
}
