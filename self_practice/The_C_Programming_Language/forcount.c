#include <stdio.h>

/**
*main -  for loop to count characters
*Return: Always (0)
*/

int main(void)
{
	int count;

	for (count = 0; getchar() != EOF; count++)
		;
	printf("\nTotal characters = %d\n", count);
}
