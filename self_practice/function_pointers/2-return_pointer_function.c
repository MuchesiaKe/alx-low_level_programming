#include <stdio.h>

/**
*add - returns sum of arguements
*
*@y: first double number
*@z: second double number
*
*Return: double
*/

double add(double y, double z)
{
	return (z + y);
}

/**
*main - checks the code
*
*Return: Always (0)
*/
int main(void)
{
	double (*add_pointer)(double, double);
	float result, a, b;

	add_pointer = &add;
	a = 34;
	b = 49;
	result = (*add_pointer)(a, b);
	printf("Sum of %f and %f is %f\n", a, b, result);
	return (0);
}
