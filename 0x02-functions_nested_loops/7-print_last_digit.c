#include "main.h"

/**
*print_last_digit - prints the last digit
*@x: integer to determine last digit
*Return: value of the last digit
*/

int print_last_digit(int x)
{
	int last;

	last = x % 10;
	_putchar('0' + last);
	return ((last + 10) % 10);
}
