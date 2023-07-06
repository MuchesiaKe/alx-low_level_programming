#include <stdio.h>

/**
*_puts_recursion - prints a string recursively
*@s: string to print
**/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s);
		printf("%c", *s++);
	}
	else
		printf("\n");
}
