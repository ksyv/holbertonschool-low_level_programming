#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array where we search
 * @size: array's size
 * @cmp: fonction to be used to compare values
 * Return: index of the first element ok,
 * or -1 if no match or size <=0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0, test = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size < 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		test = cmp(array[index]);
		if (test != 0)
			return (index);
	}
	return (-1);
}
