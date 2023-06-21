#include <stdio.h>
#include "main.h"

/**
*fib_50 : prints the first 50 fibonacci numbers
**/

void fib_50(void)
{
	int counter;
	unsigned long a, b, fib;

	counter = 0;
	a = fib = 0;
	b = 1;
	while (counter < 50)
	{
		fib = a + b;
		if (counter == 49)
			printf("%lu\n", fib);
		else
			printf("%lu, ",	fib);
		a = b;
		b = fib;
		counter++;
	}
}
