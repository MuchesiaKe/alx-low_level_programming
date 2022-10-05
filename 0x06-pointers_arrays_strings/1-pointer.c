#include <stdio.h>

/**
*main - print the size of pointr in bytes
*
*Return: Always 0.
*/

int main(void)
{
	int *p;
	
	printf("Size of pointer: %lu\n", sizeof(p));
	printf("Address of variable 'p': %p\n", &p);
	return (0);
}
