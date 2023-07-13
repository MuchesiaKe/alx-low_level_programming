#include "main.h"

/**
*_calloc - allocate memory for an array using malloc
*@nmemb: number of elements
*@size: size of each element
*Return: pointer to the allocated memory
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr_mem;

	arr_mem = malloc(nmemb * size);
	if (arr_mem == NULL || size == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		arr_mem[i] = '\0';
	return ((void*)arr_mem);
}
