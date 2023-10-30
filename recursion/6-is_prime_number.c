#include "main.h"
/**
 * is_prime_number - test if an integer is a prime number
 * @n: int tested
 * Return: 1 if n is prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (primertest(n, 2));
}

/**
 * primertest - test for prime-number
 * @t: who test
 * @i: indice test
 * Return: 1 if prime, 0 if not
 */
int primertest(int t, int i)
{
	if (i == t)
	{
		return (1);
	}
	if (i < t && (t % i == 0))
	{
		return (0);
	}
	return (primertest(t, i + 1));
}
