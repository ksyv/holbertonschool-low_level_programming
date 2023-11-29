#include "main.h"
/**
 * binary_to_uint - convert a binary number by an unsigned int
 * @b: the binary number
 * Return: unsigned int num
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int numberInt = 0;
	int index = 0, bitValue = 1;

	if (b == NULL)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index--; index >= 0; index--, bitValue *= 2)
	{
		if (b[index] & 1)
			numberInt += bitValue;
	}
	return (numberInt);
}
