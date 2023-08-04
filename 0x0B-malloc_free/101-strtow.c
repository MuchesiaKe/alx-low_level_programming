#include <stdio.h>
#include "main.h"

/**
*strtow - split string into words
*@str : string to split
*Return: Pointer to an array of strings, NULL on failur
**/

char **strtow(char *str)
{
	char **str_mem;
	int i, j, word, len, in_word;

	word = len = j = in_word = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			in_word = 1;
			word++;
		}
		else
		{
			in_word = 0;
		}
	}
	printf("Words = %d\n", word);
	str_mem = malloc(sizeof(*str_mem) * word);
	printf("Memory allocated word pointers = %ld\n", sizeof(str_mem));
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
		if (str[i] == ' ' || str[i] == '\t')
		{
			str_mem[j++] = malloc(sizeof(*str) * len);
			len = 0;
			break;
		}
	}
	str_mem[j] = NULL;
	return (str_mem);
}
