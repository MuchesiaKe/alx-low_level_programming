/**
*_strlen - returns length of a string
*
*@s: string to return the length
*
*Return: length of the string
**/

int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
