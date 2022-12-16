#include "main.h"

/**
*_islower - checks for lowercase letter
*@c: letter to be checked for case
*Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
