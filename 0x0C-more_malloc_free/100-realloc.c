#include "main.h"

/**
*_realloc - reallocates a memory block using malloc
*@ptr: current memory location
*@old_size: size of current memory
*@new_size: size of memory to create
*Return: pointer to the new reallocated memory
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *new_mem;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
		return (NULL);
	new_mem = malloc(new_size);
	for (i = 0; ((char*)ptr)[i] != '\0'; i++)
		new_mem[i] = ((char *)ptr)[i];
	new_mem[i] = '\0';
	return (new_mem);
}
