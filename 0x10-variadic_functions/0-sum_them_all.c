#include "variadic_functions.h"

/**
*sum_them_all - sums of all its parameters
*Return: sum of all its parameters
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_sum;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(arg_sum, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg_sum, int);
	va_end(arg_sum);
	return (sum);
}
