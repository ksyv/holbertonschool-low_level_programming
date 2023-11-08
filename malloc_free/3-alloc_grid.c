#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *  @width: width array
 *  @height: height array
 *  Return: the adress of the array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int index = 0, index2 = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
		return (NULL);
	for (index = 0; index < width; index++)
	{
		grid[index] = malloc(sizeof(int) * height);
		if (grid[index] == 0)
		{
			for (index2 = 0; index2 < index; index2++)
				free(grid[index2]);
			free(grid);
			return (NULL);
		}
		for (index2 = 0; index2 < height; index2++)
		{
			grid[index][index2] = 0;
		}
	}
	return (grid);
}
