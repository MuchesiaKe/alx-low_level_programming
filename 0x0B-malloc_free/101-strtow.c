#include "main.h"
#include <stdio.h>

/**
*strtow - splits a string into words
*@str: string to be split
*Return: pointer to an array of the words
**/

char **strtow(char *str)
{
	char **arr_words, *str_ref;
	int i, j, len, size;

	if (str == NULL)
		return (NULL);
	len = size = 0;
	str_ref = str;

	while (*str_ref)
	{
		while (*str_ref != ' ' || *str_ref != '\t' || *str_ref != '\n')
		{
			printf("char: %c  size:%d\n", *str_ref, size);
			size++;
			str_ref++;
			if (*str_ref == ' ' || *str_ref == '\t' || *str_ref ==  '\n')
			{
				len++;
				break;
			}
		}

		while (*str_ref == ' ' || *str_ref == '\t' || *str_ref == '\n')
		{
			str_ref++;
			if (*str_ref != ' ' || *str_ref != '\t' || *str_ref != '\n')
			{
				break;
			}
		}
		printf("Len: %d\n", len);
	}
	printf("Do we ever get here");

	for (i = 0; i < len; i++)
	{
		arr_words = malloc(sizeof(*arr_words) * (len + 1));
		if (arr_words == NULL)
			return (NULL);
	}
	while  (*str)
	{
		for (i = 0; i < len; i++)
		{
			size = 0;
			for (j = 0; *str != ' ' || *str == '\t' || *str == '\n'; j++)
				size++;
			if (size > 0)
			{
				arr_words[i] = malloc(sizeof(**arr_words) * (size + 1));
				if (arr_words[i] == NULL)
					return (NULL);

				for (j = 0; *str != ' ' || *str != '\t' || *str != '\n'; j++)
						arr_words[i][j] = *str++;
				arr_words[i][j] = '\0';
			}
			else
				str++;
		}
		arr_words[i] = NULL;
	}
	return (arr_words);
}
