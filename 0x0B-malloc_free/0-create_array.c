#include "main.h"

/**
*create_array - creates an array of chars, and
*initializes it with specific char
*@size : size of the array
*@c : character to fill
*Return: pointer to the array
**/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
	{
		return ("Memory allocation Error!\n");
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
