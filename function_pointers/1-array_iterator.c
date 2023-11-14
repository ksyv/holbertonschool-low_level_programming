#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: the array
 * @size: the array's size
 * @action: the fonction who be excecuted
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (array == NULL || action == NULL)
		return;
	for (index = 0; index < size; index++)
		action(array[index]);
}
