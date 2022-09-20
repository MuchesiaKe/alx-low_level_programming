#include "main.h"

/**
*_strlen - returns length of string
*
*@s: string to be returned length
*
*Return: Length of the string
*/

int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len ++; 
	return (len);
}
