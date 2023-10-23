#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer who swaps
 * @b: integer who swaps
 */
void swap_int(int *a, int *b)
{
	int tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}
