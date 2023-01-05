/**
*_strpbrk - searches for any of a set of bytes
*@s : string to be searched
*@accept : bytes to search
*Return: pointer to matching  s matching byte
*/

char *_strpbrk(char *s, char *accept)
{
	char *i;

	while (*s)
	{
		for (i = accept ; *i != '\0'; i++)
			if (*s == *i)
				return (s);
		s++;
	}
	return (0);
}
