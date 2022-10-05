#include <stdio.h>

/**
*main  - Program entrypoint
*/

/**
*add1- manipulates pointer value
*
*@char_ptr: address to be deferenced
*/

void add1(char *char_ptr);

int main()
{
	char a_char = 'x';
	char *a_char_ptr = &a_char;

	printf("%c\n", a_char);

	add1(&a_char);
	printf("%c\n", a_char);

	add1(a_char_ptr);
	printf("%c \n", a_char);

	add1(a_char_ptr);
	printf("%c\n", a_char);
	return (0);
}

void add1(char *char_ptr)
{
	*char_ptr = (*char_ptr) + 1;
}
