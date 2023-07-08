#include "main.h"

/**
*main - adds positive numbers
*@argc: argument count
*@argv: argument vector
*Return: 0 for success, 1 for error
**/

int main(int argc, char **argv)
{
	int i, sum, num;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
