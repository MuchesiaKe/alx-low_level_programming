#include <stdio.h>

/**
*print_array - prints n elements of an array
*
*@a : array to print elements
*@n : number of elements to print
**/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d%s", a[i], (i != (n - 1)) ? ", " : "\n");
}
