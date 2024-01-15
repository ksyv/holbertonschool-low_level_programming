#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: searched value
 * Return: -1 if value is not found, first index if it's found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%li] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
