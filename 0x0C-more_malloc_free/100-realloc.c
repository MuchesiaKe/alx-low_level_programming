#include "main.h"

/**
*_realloc - reallocates memory block using malloc and free
*@ptr: pointer to previously allocated memory
*@old_size: size of previously allocaed memory
*@new_size: size of new allocation
*Return: pointer to new allocation
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem, *ptr_val;
	unsigned int i;

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr_val = ptr;
	if (ptr == NULL)
		return (new_mem);
	for (i = 0; i <= old_size && i <= new_size; i++)
	{
		new_mem[i] = ptr_val[i];
	}
	free(ptr);
	return (new_mem);
}
