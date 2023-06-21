#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*positive_or_negative - checks if number is positive or negative
*@n : integer to be checked
**/
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
