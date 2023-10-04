#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid - frees memory created by alloc_grid
 *
 *@grid:the grid
 *@height:h
 *
 *Return:void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
