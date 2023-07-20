#include "variadic_functions.h"

/**
*sum_them_all - returns the sum of all its parameters
*@n: number of integers
*Return: sum of integers
**/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum, arg;
	va_list sum_arg;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(sum_arg, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(sum_arg, int);
		sum += arg;
	}
	va_end(sum_arg);
	return (sum);
}
