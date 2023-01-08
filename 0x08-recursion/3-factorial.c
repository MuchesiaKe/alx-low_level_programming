#include "main.h"

/**
*factorial - calculates factorial of a given number
*@n: number to find factorial
*Return: -1 if n < 0, factorial of the number
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
