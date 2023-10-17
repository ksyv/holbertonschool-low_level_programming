#include "main.h"
/**
 * _abs - computes the absolute value
 * @n: the number computed
 * Return: absolut value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
