#include "main.h"

/**
*print_sign - prints the sign of a number
*@n : number to print sign
*Return: 1 if positive, 0 if 0 and -1 if less than zero
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);

}
