/**
*rev_string - reverses a string
*@s: string to be reversed
**/

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = sizeof(s); i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
