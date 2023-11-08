#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid
* previously created by alloc_grid function
* @grid: grid created by alloc_grid
* @height: height array
* Return: the adress of the array
*/
void free_grid(int **grid, int height)
{
	int index = 0;

	if (grid == NULL || height == 0)
		return;
	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
