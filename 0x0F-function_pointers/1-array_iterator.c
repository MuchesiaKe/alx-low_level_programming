#include "function_pointers.h"

/**
*array_iterator - executes a function given as parameter
*on each element of an array
*@array: array to execute the function on
*@size: size of array
*@action: pointer to function to execute on array
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
