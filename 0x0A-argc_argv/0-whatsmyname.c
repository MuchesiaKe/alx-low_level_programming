#include <stdio.h>

/**
*main - prints its name followed by a new line
*@argc: argument counter
*@argv: argument vector
*Return: 0 for success, non-zero for failure
**/

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
