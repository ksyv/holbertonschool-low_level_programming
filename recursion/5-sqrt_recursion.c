#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the square or -1 if n has not natural square root
 */
int _sqrt_recursion(int n)
{
	return (squaretest(n, 1));
}

/**
 * squaretest - test if the number have a square
 * @t: test value
 * @i: ind test
 * Return: square or -1
 */
int squaretest(int t, int i)
{
	int square;

	square = (i * i);
	if (square == t)
	{
		return (i);
	}
	if (square > t)
	{
		return (-1);
	}
	return (squaretest(t, i + 1));
}
