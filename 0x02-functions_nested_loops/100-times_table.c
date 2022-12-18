#include "main.h"

/**
*print_times_table - prints n times table, starting with 0
*@n: endpoint for the times table
*/

void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >=  0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0' + i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
