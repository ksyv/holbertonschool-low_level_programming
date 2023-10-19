#include <stdio.h>

/**
 * main - print fibonacci's 50 first numbers
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long long int a, c = 0;
	long long int b = 1;

	for (a = 1; a <= 50; a++)
	{
		if (a % 2 != 0)
		{
			c = b + c;
			printf("%lld, ", c);
		}
		else
		{
			b = b + c;
			printf("%lld, ", b);
		}
	}
	printf("\n");
	return (0);
}
