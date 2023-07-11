#include "main.h"

/**
*argstostr - concatenates all the arguments, each
*argument followed by a \n
*@ac : argument counter
*@av : argument vector
*Return: pointer to new string, NULL on failure
**/

char *argstostr(int ac, char **av)
{
	char *av_mem;
	int len, i, j, x;

	if (ac == 0 || av == NULL)
		return (NULL);
	x = len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	av_mem = malloc(sizeof(**av) * len);
	if (av_mem == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			av_mem[x++] = av[i][j];
		av_mem[x++] =  '\n';
	}
	av[x] = '\0';
	return (av_mem);
}
