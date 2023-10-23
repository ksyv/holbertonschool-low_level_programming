#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: integrer who be printed
 * @n: number of elements who be printed
 */
void print_array(int *a, int n)
{
	int t = 0;

	while (t < n-1)
	{
		printf("%d, ", *(a + t));
		t++;
	}
	printf("%d", *(a + t));
	printf("\n");
}
