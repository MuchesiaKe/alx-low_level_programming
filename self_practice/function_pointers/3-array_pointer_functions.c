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
*main- checks the code
*
*Return: Always (0)
*/

int main(void)
{
	float (*calc[4])(float, float);
	float addition, multiplication, substraction, division;
	float a, b;

	calc[0] = &sum;
	calc[1] = &substract;
	calc[2] = multiply;
	calc[3] = &divide;
	a = 33;
	b = 7;
	addition = (*calc[0])(a, b);
	multiplication = calc[2](a, b);
	substraction = (*calc[1])(a, b);
	division = calc[3](a, b);

	/**
	for (i = 0; i < 4; i++)
		printf("Values of calc[%d] is %f\n", i, *calc[i]);
	*/
	printf("Sum of %f and %f is %f\n", a, b, addition);
	printf("Product of %f and %f is %f\n", a, b, multiplication);
	printf("Substraction of %f and %f is %f\n", a, b, substraction);
	printf("Division of %f and %f is %f\n", a, b, division);

	return (0);
}
