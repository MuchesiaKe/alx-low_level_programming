#include <stdio.h>
#include "variadic_functions.h"

/**
*print_numbers - prints numbers followed by a new line
*@separator: string printed between numbers
*@n: number of integers extra parameters passed
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int arg;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(num, int);
		if (i == (n - 1))
		{
			printf("%d\n", arg);
		}
		else
		{
			if (*separator)
				printf("%d%s", arg, separator);
			else
				printf("%d", arg);
		}
	}
	va_end(num);
}
