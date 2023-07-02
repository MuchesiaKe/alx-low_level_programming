/**
*rev_string - reverses a string
*@s: string to be reversed
**/

void rev_string(char *s)
{
	int i, j, size;
	char temp;

	size = 0;
	for (i = 0; s[i] != '\0'; i++)
		size++;
	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
