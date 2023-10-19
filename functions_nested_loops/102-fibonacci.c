#include <stdio.h>

/**
 * main - print fibonacci's 50 first numbers
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int a, c = 0;
	int b = 1;

	for (a = 1; a < 50; a++)
	{
		if (a % 2 != 0)
		{
			c = b + c;
			printf("%d, ", c);
		}
		else
		{
			b = b + c;
			printf("%d, ", b);
		}
	}
	printf("\n");
	return (0);
}
