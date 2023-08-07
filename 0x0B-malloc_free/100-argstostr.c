#include "main.h"
#include <stdio.h>

/**
*argstostr - concetenates all the arguments of the program
*@ac: argument counter
*@av: argument vector
*Return: pointer to string of concatenated arguments
**/

char *argstostr(int ac, char **av)
{
	char *arg_list;
	int i, j, a, len;

	len = a = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	arg_list = malloc(sizeof(**av) * (len + 1));
	if (arg_list == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			arg_list[a++] = av[i][j];
		arg_list[a++] = '\n';
	}
	arg_list[a] = '\0';
	return (arg_list);
}
