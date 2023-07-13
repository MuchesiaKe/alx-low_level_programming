#include "main.h"

/**
*array_range - creates an array of integers
*@min: first element of the array
*@max: last element of the array
*Return: pointer to the memory storing the array
**/

int *array_range(int min, int max)
{
	int i, len;
	int *arr_mem;

	len = (max - min) + 1;
	arr_mem = malloc(sizeof(min) * len);
	if (arr_mem == NULL || min > max)
		return (NULL);
	for (i = 0; i < len; i++)
		arr_mem[i] = min++;
	return (arr_mem);
}
