#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int t = 0;
	int temp;

	while (t < n)
	{
		temp = *(a + (n - 1));
		*(a + (n - 1)) = *(a + t);
		*(a + t) = temp;
		t++;
		n--;
	}
}
