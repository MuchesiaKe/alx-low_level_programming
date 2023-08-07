#include "main.h"

/**
*str_concat - concentenates two strings
*@s1: first string
*@s2: second string
*Return: pointer to first string
**/

char *str_concat(char *s1, char *s2)
{
	char *conc_mem;
	int len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len++;
	conc_mem = malloc(sizeof(*s1) * (len + 1));
	if (conc_mem == NULL)
		return (NULL);
	for (i = 0; *s1 != '\0'; i++)
		conc_mem[i] = *s1++;
	for (; *s2 != '\0'; i++)
		conc_mem[i] = *s2++;
	conc_mem[i] = '\0';
	return (conc_mem);
}
