#include <stdio.h>

/**
*sum- returns sum of two numbers
*
*@x: first number
*@y: second number
*
*Return: sum of x and y
*/

float sum(float x, float y)
{
	return (x + y);
}

/**
*multiply - calculates product of 2 numbers
*
*@x: first number
*@y: second number
*
*Return: product of x and y
*/

float multiply(float x, float y)
{
	return (x * y);
}

/**
*substract- finds the difference of two numbers
*
*@x: first number
*@y: second number
*
*Return: difference of x and y
*/

float substract(float x, float y)
{
	return (x  - y);
}

/**
*divide- divides two numbers
*
*@x: first number
*@y: second number
*
*Return: division of x and y
*/

float divide(float x, float y)
{
	return (x / y);
}

/**
*select_operation - selects operation to be done
*/
float (*select_operation())(float, float)
{
	int option;

	option = 0;
	printf("Select operation:\n");
	printf("1)Addition\n");
	printf("2)Substraction\n");
	printf("3)Multiplication\n");
	printf("4)Division\n");
	printf("Enter choice: ");

	scanf("%d", &option);

	if (option == 1)
		return sum;
	else if (option == 2)
		return substract;
	else if (option == 3)
		return multiply;
	else if (option == 4)
		return divide;
	else
		return NULL;
}

/**
*main- checks the code
*
*Return: Always (0)
*/

int main(void)
{
	float (*operation)(float, float);

	operation = select_operation();
	printf("Result = %f\n", operation(20, 5)); 
	return (0);
}
