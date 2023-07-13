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
	int *arr_mem;

	arr_mem = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
		arr_mem[i] = 0;
	return ((void*)arr_mem);
}
