#include "main.h"

/**
*main - prints the minimum number of coins to make change
*@argc : argument counter
*@argv : argument vector
*Return: 0 for success, 1 for error
**/

int main(int argc, char **argv)
{
	int change, coins;

	coins = 0;
	if (argc == 2)
	{
		change = atoi(argv[1]);
		if (change > 0)
			while (change)
			{
				if (change >= 25)
				{
					coins += change / 25;
					change %= 25;
				}
				else if (change >= 10)
				{
					coins += change / 10;
					change %= 10;
				}
				else if (change >= 5)
				{
					coins += change / 5;
					change %= 5;
				}
				else if (change >= 2)
				{
					coins += change / 2;
					change %= 2;
				}
				else if (change == 1)
				{
					coins += change / 1;
					change %= 1;
				}
			}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
