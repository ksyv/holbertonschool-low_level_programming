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
	char *st;
	int length, l1, l2, i;

	for (i = 0; s1[i]; i++)
	l1 = i;
	for (i = 0; s2[i] == '\0'; i++)
	l2 = i;
	length = l1 + l2;
	st = malloc(length * sizeof(char));
	if (st == NULL)
		return (NULL);
	for (i = 0; i <= l1; i++)
		st[i] = s1[i];
	for (i = 0; i <= l2; i++)
		st[i + l1 + 1] = s2[i];
	return (st);
}
