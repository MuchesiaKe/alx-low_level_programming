#include "main.h"

/**
*print_alphabet_x10 - prints 10 times lowercase alphabet
**/

void print_alphabet_x10(void)
{
	int x, i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
