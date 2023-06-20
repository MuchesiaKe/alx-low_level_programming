#include "main.h"
#include <stdio.h>

/**
*multiples_sum - computes and prints sum of all multiples of 3 or 5
**/

void multiples_sum(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	printf("%d\n", sum);
}
