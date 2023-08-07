#include "main.h"

/**
*free_grid - frees 2D array grid  created by
*alloc_grid function
*@grid: pointer to the 2D array  to be free
*@height: height of the array
**/

void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
