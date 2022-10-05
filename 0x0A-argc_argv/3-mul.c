#include "main.h"

/**
*main- multiples two arguements passed
*@argc: number of arguements
*@argv: array of arguements
*Return: Always (0)
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error\n");
	return (0);
}
