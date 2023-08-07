#include "main.h"

/**
*create_array - creates an array of chars and initializes
*it with a specific char
*@size: size of array
*@c: char to initialize the array with
*Return: pointer to memory of array
**/

char *create_array(unsigned int size, char c)
{
	char *arr_mem;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr_mem = malloc(sizeof(c) * size);
	if (arr_mem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr_mem[i] = c;
	return (arr_mem);
}
