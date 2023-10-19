#include <stdio.h>

/**
 * main - print all the sum of multiples of 3 and 5 bellow 1024
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int n, t = 0

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			t = t + n
		}
	}
	printf("%d\n", t);
	return (0);
}
