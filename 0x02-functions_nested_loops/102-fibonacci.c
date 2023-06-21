#include "main.h"

/**
*fib-50 : prints the first 50 fibonacci numbers
**/

void fib-50(void)
{
	int counter;
	unsigned long a, b, fib;

	counter = 0;
	a = fib = 0;
	b = 1;
	while (counter < 50)
	{
		fib = a + b;
		printf("%d, ", 	fib);
		a = b;
		b = fib;
		counter++;
	}
}
