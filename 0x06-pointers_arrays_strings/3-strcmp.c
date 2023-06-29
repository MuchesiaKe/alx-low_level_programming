/**
*_strcmp - compares two strings
*
*@s1: first string
*@s2: second string
*
*Return: (-1) if s1<s2, 1 if s1>s2 otherwise 0
**/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0;; i++)
	{
		if (s1[i] < s2[i] || s2[i] == '\0')
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
	}
	return (0);
}
