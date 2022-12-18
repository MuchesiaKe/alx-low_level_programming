#include "main.h"

/**
*fibonacci_50 - prints first 50 Fibonacci numbers
*/

void fibonacci_50(void)
{
	int a = 0, b = 1, count = 0, i;
	unsigned long fib;

	for (i = 0; ; i++)
	{
		fib = a + b;
		count++;
		a = b;
		b = fib;
		printf("%ld, ", fib);
		if (count >= 50)
		{
			break;
		}
	}
	printf("\n");
}
