#include <stdio.h>

/**
*str_size - determine size of array
*@str: string to find size
*Return: size of array
**/

int str_size(char *str)
{
	int size, word_size;

	size = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		else
		{
			size++;
			word_size = 0;
			while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
			{
				word_size++;
				str++;
			}
			printf("Word size: %d\n", word_size);
			
		}
	}
	return (size);
}

/**
*main - control program execution
*Return: 0 for success
**/

int main(void)
{
	printf("Size: %d\n", str_size("How many words are in this sentence"));
	return (0);
}
