#include "main.h"

/**
 * set_bit - change the value of a bit at a given index by 1.
 * @n: number.
 * @index: position.
 * Return: 1 if works or -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);
	mask <<= index;
	*n = *n | mask;
	return (1);
}
