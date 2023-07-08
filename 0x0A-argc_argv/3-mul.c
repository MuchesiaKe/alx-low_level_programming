#include "main.h"

/**
*main - multiplies two arguments
*@argc : argument counter
*@argv : argument vector
*Return: 0 for success, 1 to indicate error
**/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
