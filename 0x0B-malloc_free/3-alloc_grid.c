#include "main.h"

/**
*alloc_grid - returns pointer to a 2 dimensional array of ints
*@width: width of 2D array
*@height: height of 2D array
*Return: pointer to the 2D array
**/

int **alloc_grid(int width, int height)
{
	int **grid_mem, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid_mem = malloc(sizeof(*grid_mem) * height);
	if (grid_mem == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid_mem[i] = malloc(sizeof(**grid_mem) * width);
		if (grid_mem[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid_mem[i][j] = 0;
	}
	return (grid_mem);
}
