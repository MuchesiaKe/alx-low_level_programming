#include "main.h"

/**
*print_chessboard - prints the chessboard
**/

void print_chessboard(char (*a)[8])
{
	int i;

	while (*a++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(*a[i]);
			
		}
	}
}
