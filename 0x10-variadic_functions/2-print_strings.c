#include "variadic_functions.h"

/**
*print_strings - prints strings followed by new line
*@separator: printed between strings
*@n: number of strings passed to the function
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_str;
	char *str;

	va_start(arg_str, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_str, char *);
		if (i == n - 1)
			printf("%s\n", str ? str : "(nil)");
		else
			if (*separator)
				printf("%s%s", str ? str : "(nil)", separator);
			else
				printf("%s", str ? str : "(nil)");
	}
	va_end(arg_str);
}
