#include "3-calc.h"

/**
*op_add - sum of the two ints
*@a: first operand
*@b: second operand
*Return: sum of a and b
**/

int op_add(int a, int b)
{
	return (a + b);
}


/**
*op_sub - difference of the two ints
*@a: first operand
*@b: second operand
*Return: difference of a and b
**/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
*op_mul - product of the two ints
*@a: first operand
*@b: second operand
*Return: product of a and b
**/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
*op_div - division of the two ints
*@a: first operand
*@b: second operand
*Return: division of a and b
**/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}


/**
*op_mod - modulo of the two ints
*@a: first operand
*@b: second operand
*Return: remainder of a/b
**/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
