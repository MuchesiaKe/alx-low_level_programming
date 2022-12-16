#include "main.h"

/**
*prints - prints _putchar followed by a new line
*Return : void
*/

void prints(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; x[i] != '\0'; i++)
		_putchar(x[i]);
	_putchar('\n');
}

