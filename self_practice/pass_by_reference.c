#include <stdio.h>

/**
*modify_my_char_var - solve me
*@cc : passed by reference
*@ccc : pass by value
*Return: nothing
*/

void modify_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

/**
*main - solve me
*Return: always (0)
*/

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of c is %c\n", c);
	printf("Address of c is %p\n", &c);
	printf("Value of p is %p\n", p);
	printf("Address of p is %p\n", &p);
	modify_my_char_var(p, c);
	printf("Value of c after modification is %c\n", c);
	printf("Address of c after modification is %p\n", &c);
	printf("Value of p after modification is %p\n", p);
	printf("Address of p after modification is %p\n", &p);
	return (0);
}
