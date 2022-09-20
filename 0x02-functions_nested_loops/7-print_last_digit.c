#include "main.h"

/**
*print_last_digit- prints the last digit of a number
*
*@i: number to be checked for the last digit
*
*Return: returns the last digit of the number
*/

int print_last_digit(int i)
{
	int x = i % 10;

	_putchar('0' + i);
	return (x);
}
