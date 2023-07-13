#include "main.h"

/**
*malloc_checked - allocates memory using malloc
*@b: size of memory to allocate
*Return: Pointer to allocated memory, 98 on memory
*allocation failure
**/

void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);
	if (mem_alloc == NULL)
		exit (98);
	return (mem_alloc);
}
