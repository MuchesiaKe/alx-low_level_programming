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

	arr = malloc(sizeof(*arr) * size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
