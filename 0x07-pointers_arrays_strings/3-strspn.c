#include <stdio.h>
/**
*_strspn - gets length of a prefix substring
*@s: string to be searched through
*@accept: substring to be searched
*Return: number of bytes of accept in s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *i;

	count = 0;
	while (*accept)
	{
		accept++;
		for (i = s; *i != '\0'; i++)
			if (*i == *accept)
				count++;
	}
	return (count);
}
