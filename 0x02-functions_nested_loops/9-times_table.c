#include "main.h"

/**
*times_table - print 9 times table
**/

void times_table(void)
{
	int x, y, res;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			res = x * y;
			if ((res / 10) == 0)
				_putchar('0' + res);
			else
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
