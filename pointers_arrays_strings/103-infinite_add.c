#include "main.h"
/**
 * infinite_add - adds two numbers who stocked in char array
 * @n1: the first number
 * @n2: the second number
 * @r: result
 * @size_r: size of r
 * Return: 0 if r is to small or pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c;

	c = size_r;
	for (a = 0; n1[a] != '\0'; a++)
	for (b = 0; n2[b] != '\0'; b++)
	if (c < a || c < b)
	{
		return (0);
	}
	while (a > 0 && b > 0)
	{
		if (n1[a] + n2[b] < (10 + '0'))
		{
			r[c] += n1[a] + n2[b];
		}
		else
		{
			r[c] += n1[a] + n2[b] - (10 + '0');
			r[c - 1] += (1 + '0');
		}
		a--;
		b--;
		c--;
	}
	if (a == 0)
	{
		while (b > 0)
		{
			r[c] += n2[b];
			b--;
			c--;
		}
		return (r);
	}
	else
	{
		while (a > 0)
		{
			r[c] += n1[a];
			a--;
			c--;
		}
		return (r);
	}
	return (r);
}
