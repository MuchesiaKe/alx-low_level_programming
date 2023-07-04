/**
*cap_string - capitalizes all words of a string
*
*@str : string to be capitalized
*
*Return: Pointer to the capitalized string
**/

char *cap_string(char *str)
{
	int i, j, size;
	char sep[] = {' ', '\t', '\n', ',', ';', '.',
	 '!', '?', '"', '(', ')', '{', '}'};

	size = sizeof(sep);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (str[i] == sep[j])
			{
				i++;
				str[++i] -= 32;
			}
		}
	}
	return (str);
}
