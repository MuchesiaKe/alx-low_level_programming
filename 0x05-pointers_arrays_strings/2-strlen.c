/**
*_strlen - returns length of a string
*@s: the string
*/

int _strlen(char *s)
{
	int i, count;

	count = 0;
	for(i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
