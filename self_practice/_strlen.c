#include <stdio.h>

/**
*_strlen - return length of a string
*Return: lenght of the string
*/

int _strlen(char *s)
{
	char *p = s;
	int len;

	len = 0;
	for (; *p != '\0'; p++)
		len++;
	return len;
}

int main(void)
{
	printf("%d\n", _strlen("Hello world"));
	return (0);
}
