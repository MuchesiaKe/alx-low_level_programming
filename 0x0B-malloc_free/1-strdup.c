#include "main.h"
#include <stdio.h>

/**
*_strdup - returns pointer to a newly allocated space in memory, whic
*contains a copy of the string given as a parameter
*@str: string to copy to the allocated memory
*Return: pointer to copy of the string
**/

char *_strdup(char *str)
{
	int len, i;
	char *str_mem;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	str_mem = malloc(sizeof(*str) * (len + 1));
	if (str_mem == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		str_mem[i] = str[i];
	}
	str_mem[i] = '\0';
	return (str_mem);
}
