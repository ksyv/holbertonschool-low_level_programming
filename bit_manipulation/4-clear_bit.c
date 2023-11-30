#include "main.h"

/**
 * clear_bit - set the value of a bit at a given index by 0.
 * @n: number.
 * @index: position.
 * Return: 1 if works or -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n == 0)
		return (0);
	*n = *n & ~(1 << index);
	return (1);
}
