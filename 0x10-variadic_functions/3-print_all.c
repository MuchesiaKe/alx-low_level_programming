#include "variadic_functions.h"

/**
*print_all - prints anything
*@format: list types of arguments passed to the function
**/

void print_all(const char * const format, ...)
{
	va_list specifier;
	unsigned int i;

	va_start(specifier, format);
	i = 0;
	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(specifier, int));
				break;
			case 'i':
				printf("%d", va_arg(specifier, int));
				break;
			case 'f':
				printf("%f", va_arg(specifier, double));
				break;
			case 's':
				printf("%s", va_arg(specifier, char *));
				break;
		}
	if (format[i])
		printf(", ");
	}
putchar('\n');
va_end(specifier);
}
