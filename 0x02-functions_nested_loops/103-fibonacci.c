#include <stdio.h>
#include "main.h"

/**
*fib_4m - prints fibonacci numbers less than 4M
**/

void fib_4m(void)
{
	unsigned long a, b, fib;

	a = fib = 0;
	b = 1;

	while (fib < 4000000)
	{
		fib = a + b;
		if (fib % 2 == 0)
			printf("%lu, ", fib);
		a = b;
		b = fib;
	}
}
