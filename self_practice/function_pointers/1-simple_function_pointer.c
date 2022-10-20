#include <stdio.h>

/**
*function - illustrate basic function pointer
*
*@x: value to be printed
*/

void function(int x)
{
	printf("X: is %d\n", x);
}

/**
*main - checks the code
*
*Return: Always(0)
*/
int main(void)
{
	void (*function_pointer)(int);

	function_pointer = &function;
	(*function_pointer)(4);
	return (0);
}
