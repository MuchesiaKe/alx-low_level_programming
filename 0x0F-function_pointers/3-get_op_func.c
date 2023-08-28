  op_t ops[] = {
     12         {"+", op_add},
     13         {"-", op_sub},
     14         {"*", op_mul},
     15         {"/", op_div},
     16         {"%", op_mod},
     17         {NULL, NULL}
     18         };
#include "3-calc.h"

/**
*get_op_func - selects correct function to perform operation
*@s: pointer to function for the operation
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
	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
