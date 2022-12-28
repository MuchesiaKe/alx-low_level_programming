#include <stdio.h>

/**
*strcmp_ptr - compares strings
*@s: first operand
*@t: second operand
*Return: <0 if s<t 0 if s == t and >0 if s>t
*/

int strcmp_ptr(char *s, char *t)
{
	for ( ; *s == *t; s++, t++)
		if(*s == '\0')
			return (0);
	return (*s - *t);
}

int main(void)
{
	printf("%d\n", strcmp_ptr("Hello", "world"));
	printf("%d\n", strcmp_ptr("Hello", "Hello"));
	printf("%d\n", strcmp_ptr("world", "Hello"));
	return (0);
}
