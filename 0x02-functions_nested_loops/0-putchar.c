#include "main.h"

/**
*putschar- Prints _putchar followed by a new line
*/

void putschar(void)
{
	char strng[] = "_putchar";
	long unsigned int i;

	for (i = 0; i < sizeof(strng); i++)
	{
		_putchar(strng[i]);
	}
	_putchar('\n');
}
