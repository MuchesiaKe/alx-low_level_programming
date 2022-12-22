#include "main.h"

/**
*rev_string - reverses a string
*@s: string to be reversed
*/

void rev_string(char *s)
{
	int i = 0, size = 0, rev[20];

	for (i = 0; s[i] != '\0'; i++)
		size++;
	for (i = size; i >= 0; i--)
		rev[i] = s[i];
}
