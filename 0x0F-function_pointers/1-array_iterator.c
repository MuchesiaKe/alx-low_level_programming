#include <stddef.h>

/**
*array_iterator - executes function on each array element
*@size: size of the array
*@array: array to execute function on
*@action: function callback
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
