#include "main.h"

/**
*string_nconcat - concatenates two strings
*@s1: first string
*@s2: second string
*@n: size of second string to concatenate
*Return: pointer to the allocated memory where
*the concatenated string is stored
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, size;
	char *concat_mem;

	size = x = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		size++;
	for (i = 0; s2[i] != '\0' && i < n; i++)
		size++;
	concat_mem = malloc(sizeof(*s1) * size);
	for (i = 0; s1[i] != '\0'; i++)
		concat_mem[x++] = s1[i];
	for (i = 0; s2[i] != '\0' && i < n; i++)
		concat_mem[x++] = s2[i];
	concat_mem[x] = '\0';
	return (concat_mem);
}
