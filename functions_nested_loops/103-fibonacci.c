#include <stdio.h>

/**
 * main - print fibonacci's 50 first numbers
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int a, b, c, s;

	a = 0;
	b = 1;
	c = a + b;
	s = a + b + c;
	while (c < 4000000)
	{
		a = b;
		b = c;
		c = a + b;
		if (c % 2 != 0)
		{
			s += c;
		}
	}
	printf("%ld\n", s);
	return (0);
}
