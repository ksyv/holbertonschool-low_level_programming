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
	int **len = NULL;
	int index = 0, index2 = 0;

	if (width == 0 || height == 0)
		return (NULL);
	len = malloc(sizeof(int) * width * height);
	for (index = 0; index < width; index++)
		for (index2 = 0; index2 < height; index2++)
			len[index][index2] = 0;
	return (len);
}
