#include "main.h"

/**
*natural_sum - sum of all natural numbers <1024
*/

void natural_sum(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("Sum = %d \n", sum);
}
