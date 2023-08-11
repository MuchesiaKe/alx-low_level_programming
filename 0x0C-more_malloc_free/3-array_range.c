#include "main.h"

/**
*array_range - creates an array of integers
*@min: starting point
*@max: end point
*Return: pointer to the array
**/

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((sizeof(int) * (max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i] = min++;
	return (arr);
}
