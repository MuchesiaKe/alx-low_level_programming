#include <stdio.h>

/**
*_strspn - gets length of a prefix string
*@s : the string with substring prefix
*@accept : string to check for bytes in prefix substring
*Return: number of bytes found
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j;

	count = i = j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			printf("%c %c\n", s[i], accept[j]);
			if (s[i] == accept[j])
			{
				count++;
				continue;
			}
		}
	}
	return (count);
}
