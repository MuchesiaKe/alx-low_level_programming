#include "main.h"

/**
*fibonacci_even - fibonacci for even numbers <4M
*/

void fibonacci_even(void)
{
	int a = 0, b = 2, fib = 0, i = 0;

	for (i = 0; i <= 4000000; i += 2)
	{
		fib = a + b;
		printf("%d, ", fib);
		a = b;
		b = fib;
		if (fib >= 4000000)
			break;
	}
	printf("\n");
}
