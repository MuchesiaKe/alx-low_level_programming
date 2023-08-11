#include "main.h"

/**
*array_range - creates an array of integers
*@min: starting point
*@max: end point
**/

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((sizeof(int) * (max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= ((max - min) + 1); i++)
		arr[i] = min++;
	return (arr);
}
