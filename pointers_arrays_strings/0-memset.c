#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: memory area pointed
 * @b: the constant byte
 * @n: number of bytes fills with the constant
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		*(s + t) = b;
	}
	return (s);
}
