#include "main.h"

/**
*main - prints the minimum number of coins
*@argc: argument counter
*@argv: argument vector
*Return: number of coins
**/

int main(int argc, char **argv)
{
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
	}
	else
	{
		changer(change);
	}
	return (0);
}

/**
*changer - converts to relevant coins
*@change: amount to convert to coins
**/

void changer(int change)
{
	int coins;

	coins = 0;
	while (change != 0)
	{
		if (change >= 25)
		{
			coins += (change / 25);
			change %= 25;
		}
		else if (change >= 10)
		{
			coins += (change / 10);
			change %= 10;
		}
		else if (change >= 5)
		{
			coins += (change / 5);
			change /= 5;
		}
		else if (change >= 2)
		{
			coins += (change / 2);
			change /= 2;
		}
		else if (change == 1)
		{
			coins += (change / 1);
			change %= 1;
		}
	}
	printf("%d\n", coins);
}
