#include <stdio.h>

/**
*main - prints all possible different combinations of two digits
*Return: Always (0)
**/

int main(void)
{
	int num, first, last, second;

	first = last = second = 0;
	for (num = 0; num <= 999; num++)
	{
		first = num / 100;
		second = (num / 10) % 10;
		last = num % 10;
		if (first < second && second < last)
		{
			putchar('0' + first);
			putchar('0' + second);
			putchar('0' + last);

			if (num != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
