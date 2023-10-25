#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: list of integers
 * @size: the size of the square
 */
void print_diagsums(int *a, int size)
{
	int b;
	int r1 = 0, r2 = 0;

	for (b = 0; b < size; b++)
	{
		r1 += *(a + b * size + b);
		r2 += *(a + b * size + size - 1 - b);
	}
	printf("%d, %d\n", r1, r2);
}
