#include "main.h"

/**
*free_grid - frees 2d grid created by alloc_grid
*@grid : pointer to grid to free
*@height : to loop through and free each array of 2D
**/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
