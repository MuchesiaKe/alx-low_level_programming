#include "main.h"

/**
*swap_int - swaps values of two integers
*@a: first operand
*@b: second operand
*/

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
