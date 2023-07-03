#include <stddef.h>

/**
*_strchr - locates a character in a string
*@s : string to search from
*@c : character to search
*Return: pointer to first occurence of the character c in s
*or NULL if the character is not found
**/

char *_strchr(char *s, char c)
{
	while (*s++)
		if (*s == c)
			return (s);
	return (NULL);
}
