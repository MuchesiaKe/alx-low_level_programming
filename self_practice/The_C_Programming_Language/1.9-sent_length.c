#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

/**
*main - print longest input line
*Return: Always (0)
*/

int main(void)
{
	int len, max;
	char line[MAXLINE], longest[MAXLINE];

	max = 0;
	while ((len = _getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
		if (max > 0)
			printf("%s", longest);
	}
	return (0);
}

/**
*getline - read a line into s, return length
*@s: line to determine length
*@lim: maximum allowed length
*Return: lenght of the line
*/

int _getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return (i);
}

/**
*copy- copy 'from' into 'to';
*@from: string to be copied
*@to: new longest string
*/

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
