#include "main.h"

/**
*malloc_checked - allocates memory using malloc
*@b: size of memory to allocate
*Return: pointer to allocated memory
**/

void *malloc_checked(unsigned int b)
{
	char *alloc_mem;

	alloc_mem = malloc(b);
	if (alloc_mem == NULL)
		exit(98);
	return (alloc_mem);
}
