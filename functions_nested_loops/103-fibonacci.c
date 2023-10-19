#include <stdio.h>

/**
 * main - print fibonacci's 50 first numbers
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int a, d = 0;
	long int b, c = 1;

	while (a > 4000000 || b > 4000000)
	{
		d++;
		if (d % 2 != 0)
		{
			a = a + b;
			c = c + a;
		}
		else
		{
			b = b + a;
			c = c + b;
		}
	}
	printf("%ld\n", c);
	return (0);
}
