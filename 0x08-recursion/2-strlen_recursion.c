/**
*_strlen_recursion - finds the length of a string recursively
*@s: string to find length
*Return: length of the string
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (0);
	length++;
	return (length + _strlen_recursion(++s));
}
