#include "main.h"

/**
*print_triangle - prints triangle in the terminal
*@size : size of the triangle
**/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = (size - i); j >= 0; j--)
			_putchar(' ');
		for (k = i; k <= size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
