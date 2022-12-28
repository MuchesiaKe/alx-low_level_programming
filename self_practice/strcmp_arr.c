#include <stdio.h>

/**
*strcmp_arr -compares characters s and t 
*@s: first operand
*@t: second operand
*Return: returns <0 if s<t, 0 if s==t, >0 if s>t
*/

int strcmp_arr(char *s, char *t)
{
	int i;

	for (i = 0; s[i] == t[i]; i++)
	{
		if (s[i] == '\0')
			return (0);
	}
	return (s[i] - t[i]);
}

int main(void)
{
	printf("%d\n", strcmp_arr("Hello", "world"));
	printf("%d\n", strcmp_arr("Hello", "Hello"));
	printf("%d\n", strcmp_arr("world", "Hello"));
	return (0);
}
