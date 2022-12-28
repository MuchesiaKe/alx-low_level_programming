#include <stdio.h>

/**
*strcpy_ptr - copies string b into a
*@a: the first string
*@b: the second string
*/

void strcpy_ptr(char *x, char *y)
{
	while ((*x = *y ) != '\0')
	{
		x++;
		y++;
	}
}

/**
*main - checks the code
*Return: Always (0)
*/

int main(void)
{
	char *a, *b;

	a = "hello";
	b = "world";
	strcpy_ptr(a, b);
	printf("%s\n", a);
	return (0);
}
