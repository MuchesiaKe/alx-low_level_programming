#include "main.h"

/**
*print_times_table - Prints n times table
*@n : last number for the times table
**/

void print_times_table(int n)
{
	int res, x, y;

	if (n >= 0 && n <= 15)
	{
		for (y = 0 ; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				res = x * y;
				if ((res / 10) == 0)
				{
					_putchar('0' + res);
					_putchar(',');
					_putchar(' ');
				}
				else if ((res / 10) > 0)
				{
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
					_putchar(',');
					_putchar(' ');
				}
				else if ((res / 100) > 0)
				{
					_putchar('0' + (res / 100));
					_putchar('0' + ((res / 10) % 10));
					_putchar('0' + (res % 10));
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
