#include "main.h"

/**
*_islower- Checks for lowercase character
*
*@c: character to be checked
*
*Return: returns 1 if c is lowercase
*return 0 otherwise
*/

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		{
		if (i == c)
			return (1);
		}
	return (0);
}
