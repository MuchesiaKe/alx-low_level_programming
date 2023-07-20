#include <stdio.h>
#include "variadic_functions.h"

/**
*print_strings - prints strings followed by a new line
*@separator: string printed between numbers
*@n: number of strings extra parameters passed
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list str_arg;

	va_start(str_arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(str_arg, char *);
		if (i == (n - 1))
		{
			printf("%s\n", str);
		}
		else
		{
			if (*separator)
				printf("%s%s", str, separator);
			else
				printf("%s", str);
		}
	}
	va_end(str_arg);
}
