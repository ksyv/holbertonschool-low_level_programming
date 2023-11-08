#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	void *memcalloc = NULL;
	int *sequence = NULL, num = min;
	int index = 0;

	if (min > max)
		return (NULL);
	memcalloc = malloc((max + 1 - min) * sizeof(int));
	if (memcalloc == NULL)
		return (NULL);
	sequence = memcalloc;
	for (index = 0; index < (max + 1 - min); index++, num++)
		sequence[index] = num;
	return (memcalloc);
}
