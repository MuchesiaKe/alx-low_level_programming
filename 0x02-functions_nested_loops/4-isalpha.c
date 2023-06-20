#include "main.h"

/**
*_isalpha - checks for alphabetic character
*@c : character to be checked
*Return: 1 if c is letter, 0 otherwise
**/

int _isalpha(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		if (x == c)
			return (1);
	for (x = 'A'; x <= 'Z'; x++)
		if (x == c)
			return (1);
	return (0);
}
