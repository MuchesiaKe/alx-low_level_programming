#include "main.h"

/**
*_isdigit- checks for a digit
*
*@c: to be checked if a digit
*
*Return: 1 if digit, 0 otherwise
*/

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
