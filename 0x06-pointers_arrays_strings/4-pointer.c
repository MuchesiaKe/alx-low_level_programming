#include <stdio.h>

/**
*modify_my_param - the function does not modify n
*
*@m: a useless integer
*
*Return: nothing
*/

void modify_my_param(int m)
{
	printf("Value of 'm' in the function before reassinment is: %d\n", m);
	printf("Address of 'm' before reassignment is: %p\n", &m);
	m = 402;
	printf("Value of 'm' in  the function after reassignment is: %d\n", m);
	printf("Address of 'm' after reassignment is: %p\n", &m);
}

/**
*main- parameters are passed by value
*
*Return: Always 0.
*/

int main(void)
{
int n;

n = 98;
printf("Value of 'n' before function execution is: %d\n", n);
printf("Address of 'n' before function execution is: %p\n", &n);
modify_my_param(n);
printf("Value of 'n' after function execution is: %d\n", n);
printf("Address of 'n' after function execution is: %p\n", &n);
return (0);
}
