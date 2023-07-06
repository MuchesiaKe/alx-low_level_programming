/**
*_strlen_recursion - find length of a string recursively
*@s: string to find length
*Return: length of the string
**/

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
