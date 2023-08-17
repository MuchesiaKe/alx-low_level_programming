#include "variadic_functions.h"
#include <stdio.h>

/**
*print_numbers - prints numbers
*@separator: string to be printed between numbers
*@n: number of integers passed into the function
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list arg_num;

	va_start(arg_num, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg_num, int);
		if (i == (n - 1))
			printf("%d\n", num);
		else
			if (*separator)
				printf("%d%s", num, separator);
			else
				printf("%d", num);
	}
	va_end(arg_num);
}
