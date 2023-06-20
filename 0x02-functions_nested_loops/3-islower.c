#include "main.h"

/**
*_islower - checks for lowercase character
*@c : character to be checked by the function
*Return: 1 if lowercase,0 otherwise
**/

int _islower(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		if (c == x)
			return (1);
	return (0);
}
