#include <stdio.h>

/**
 * main - print fibonacci's 50 first numbers
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0;
	unsigned long int c = 0;
	unsigned long int b = 1;

	for (a = 1; a < 98; a++)
	{
		if (a % 2 != 0)
		{
			c = b + c;
			if (c < 2147483647)
			{
				printf("%ld, ", c);
			}
			else
			{
				printf("%ld", c / 1000000000);
				printf("%ld, ", c % 1000000000);
			}
		}
		else
		{
			b = b + c;
			if (b < 2147483647)
			{
				printf("%ld, ", b);
			}
			else
			{
				printf("%ld", b / 1000000000);
				printf("%ld, ", b % 1000000000);
			}
		}
	}
	b = b + c;
	printf("%ld", b / 1000000000);
	printf("%ld\n", b % 1000000000);
	return (0);
}
