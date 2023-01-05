#include <stdio.h>

/**
*fibonacci - generates fibonacci sequence
*@i: int to generate fibonacci value
*Return: fibonacci value
*/

int fibonacci(int i)
{
	if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	return (fibonacci(i - 1) + fibonacci(i - 2));
}

/**
*main - checks the code
*Return: always (0)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		printf("%d\n", fibonacci(i));
	return (0);
}
