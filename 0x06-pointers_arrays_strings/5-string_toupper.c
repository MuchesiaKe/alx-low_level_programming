/**
*string_toupper - changes all lowercase letters to uppercase
*
*@str: string to convert to uppercase
*Return: pointer to the string converted to uppercase
**/

char *string_toupper(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (str[i] == j)
			{
				str[i] -= 32;
				continue;
			}
		}
	}
	return (str);
}
