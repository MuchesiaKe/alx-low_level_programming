#include "main.h"

/**
*string_nconcat - concetenates two strings
*@s1: first string
*@s2: second string
*@n: number of bytes to allocate memory
*Return: pointer to the allocated memory with strings
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *alloc_mem;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	alloc_mem = malloc(sizeof(s1) + n);
	if (alloc_mem == NULL)
		return (NULL);
	while (*s1)
		alloc_mem[i++] = *s1++;
	while (*s2 && j < n)
	{
		alloc_mem[i++] = *s2++;
		j++;
	}
	alloc_mem[i] = '\0';
	return (alloc_mem);
}
