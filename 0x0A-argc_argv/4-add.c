#include "main.h"

/**
*main - adds positive numbers
*@argc: argument counter
*@argv: argument vector
*Return: 0 for success, non-zero otherwise
**/

int main(int argc, char *argv[])
{
	int sum, i, operand;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		operand = atoi(argv[i]);
		if (operand == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += operand;
	}
	printf("%d\n", sum);
	return (0);
}
