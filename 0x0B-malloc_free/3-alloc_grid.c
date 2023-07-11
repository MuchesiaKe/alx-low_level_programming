#include "main.h"

/**
*alloc_grid - creates and initialize 2 dimensional array of ints
*@width : width of the array
*@height : height of the array
*Return: pointer to a 2 dimensional array of integers
**/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = malloc(sizeof(**arr) * (height * width));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;	
		}
	}
	return (arr);
}
