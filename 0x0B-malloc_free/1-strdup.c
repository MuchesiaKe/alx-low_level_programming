#include "main.h"

/**
*_strdup - returns pointer to a newly allocated space in memory
*which contains a copy of the string given as parameter
*@str: string to store in allocatted memory
*Return: pointer to the allocated memory
**/

char *_strdup(char *str)
{
	char *mem_alloc;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	mem_alloc = malloc(sizeof(*str) * i);
	if (mem_alloc == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		mem_alloc[i] = str[i];
	}
	mem_alloc[i] = '\0';
	return (mem_alloc);
}
