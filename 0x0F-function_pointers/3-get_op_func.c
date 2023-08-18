#include "3-calc.h"

/**
*get_op_func - selects correct function to perform operation
*@a: first operand
*@b: second operand
*Return: pointer to function to perform operation
**/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	printf("%s\n", ops[i][1]);
	while (ops[i++])
	{
		if (*s == ops[i][1])
			return (ops[i][2](a, b));
	}
	printf("Error\n");
	return (99);
}
