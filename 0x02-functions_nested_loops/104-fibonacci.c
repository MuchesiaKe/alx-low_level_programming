#include <stdio.h>
#include "main.h"

/**
*fib_98 - prints the first 50 fibonacci numbers
**/

void fib_98(void)
{
	int counter;
	unsigned long a, b, fib;

	counter = 0;
	a = fib = 0;
	b = 1;
	while (counter < 98)
	{
		fib = a + b;
		if (counter == 97)
			printf("%lu\n", fib);
		else
			printf("%lu, ",	fib);
		a = b;
		b = fib;
		counter++;
	}
}
