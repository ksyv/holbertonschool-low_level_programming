#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initialized
 *  it with a specific char
 *  @c: the specific char
 *  @size: the array size
 *  Return: the adress of the array
 */
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int  i;

	if (size == 0)
		return (NULL);
	st = malloc(size * sizeof(char));
	if (st == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		st[i] = c;
	return (st);
}
