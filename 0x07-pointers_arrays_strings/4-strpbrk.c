#include <stddef.h>

/**
*_strpbrk - searches a string for any set of bytes
*@s: string to be search
*@accept: byte to be search
*Return: pointer to the byte s in accept
*NULL if not found
**/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = j = 0;
	for (i = 0; accept[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	return (NULL);
}
