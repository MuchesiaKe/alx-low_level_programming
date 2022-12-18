#include "main.h"

/**
*fibonacci_98 - prints first 98 Fibonacci numbers
*/

void fibonacci_98(void)
{
	int a = 0, i, b = 1, fib, count = 0;

	for (i = 0; ; i++)
	{
		if (count >= 98)
			break;
		fib = a + b;
		printf("%d, ", fib);
		a = b;
		b = fib;
		count++;
	}
	printf("\n");
}
