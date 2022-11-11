#include <stdio.h>
/**
*main - count characters
*Return: Always (0)
*/
int main(void)
{
	int count;

	while (getchar() != EOF)
		count++;
	printf("Total characters = %d\n", count);
	return (0);
}
