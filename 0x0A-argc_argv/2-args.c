#include <stdio.h>

/**
*main - prints all arguments it receives
*@argc: argument counter
*@argv: argument vector
*Return: 0 for success, non-zero for failure
**/

int main(int argc, char **argv)
{
	(void) argc;
	while (*argv)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
