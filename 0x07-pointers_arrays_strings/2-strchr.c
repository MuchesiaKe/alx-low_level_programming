/**
*_strchr - locate a character in a string
*@s: pointer to the string
*@c: character to be located
*Return: NULL or pointer to s
*/

char *_strchr(char *s, char c)
{
	char *i;

	for (i = s; *i != '\0'; i++)
		if (*i == c)
			return (i);
	return (0);
}
