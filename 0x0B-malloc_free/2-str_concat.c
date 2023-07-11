#include "main.h"

/**
*str_concat - concetenates two strings
*@s1: first string
*@s2: second string
*Return: pointer to concatenated string
**/

char *str_concat(char *s1, char *s2)
{
	char *concat_mem;
	int len, i, s1_len;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
	}
	len = s1_len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	s1_len = len;
	for (i = 0; s2[i] != '\0'; i++)
		len++;

	concat_mem = malloc(sizeof(*s1) * (len + 1));
	if (concat_mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0' ; i++)
	{
		concat_mem[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
		concat_mem[s1_len++] = s2[i];
	concat_mem[s1_len] = '\0';
	return (concat_mem);
}
