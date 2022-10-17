#include "main.h"

/**
*print_diagonal - draws a diagonol line on the terminal
*@n: number of diagnol lines
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
	{
		{
			_putchar(i);
		}
		_putchar(92);
		_putchar('\n');
	}
}
