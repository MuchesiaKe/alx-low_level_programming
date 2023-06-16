#include<stdio.h>

/**
*main - program entrypoint
*Return: Always 0
**/

int main(void)
{

	printf("Size of char: %d byte(s)\n", (int)sizeof(char));
	printf("Size of int: %d byte(s)\n", (int)sizeof(int));
	printf("Size of long int: %d byte(s)\n", (int)sizeof(long));
	printf("Size of long long int: %d byte(s)\n", (int)sizeof(long int));
	printf("Size of float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
