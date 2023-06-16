#include <stdio.h>

/**
*main - prints all possible different combinations of two digits
*Return: Always (0)
**/

int main(void)
{
	int num, first, last;

	first = last = 0;
	for (num = 0; num <= 99; num++)
	{
		first = num / 10;
		last = num % 10;
		if (first < last)
		{
			putchar('0' + first);
			putchar('0' + last);

			if (num != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
