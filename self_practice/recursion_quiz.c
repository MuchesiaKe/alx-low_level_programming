#include<stdio.h>

/**
*print - recursion function to  print number
*@nb : number to be printed recursively
*Return : returns nb
*/


int print(int nb)
{
	if (nb < 0)
		return (0);
	printf("%d", nb + print(nb - 1));
	nb--;
	printf("Here");
	return (nb);
}

/**
*main- Entrypoint 
*Return: Always (0)
*/

int main(void)
{
	print(4);
	return (0);
}
