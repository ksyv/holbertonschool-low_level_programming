#include <stdio.h>

/**
 * main - print fibonacci's 50 first numbers
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int a, c = 0;
	long int b = 1;

	for (a = 1; a < 50; a++)
	{
		if (a % 2 != 0)
		{
			c = b + c;
			printf("%ld, ", c);
		}
		else
		{
			b = b + c;
			printf("%ld, ", b);
		}
	}
	b = b + c;
	printf("%ld\n", b);
	return (0);
}
