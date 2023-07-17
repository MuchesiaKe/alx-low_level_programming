#include <stdio.h>

/**
*main - prints name of file it was compiled from
*Return: 0 on success, non-zero on failure
**/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
