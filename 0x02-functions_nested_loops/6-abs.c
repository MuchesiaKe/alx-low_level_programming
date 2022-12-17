#include "main.h"

/**
*_abs - computes absolute value
*@x: integer to compute absolute value
*Return: absolute value of the x
*/

int _abs(int x)
{
	if (x < 0)
		return (0 - x);
	else
		return (x);
}
