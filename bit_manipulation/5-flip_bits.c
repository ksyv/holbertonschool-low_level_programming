#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: the number of flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = 0, numberOfFlip = 0;
	unsigned long int comparison = n ^ m, numberComparated = 0;

	for (index = 63; index >= 0; index--)
	{
		numberComparated = comparison >> index;
		if ((numberComparated & 1) == 1)
			numberOfFlip++;
	}
	return (numberOfFlip);
}
