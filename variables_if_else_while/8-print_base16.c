#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char r = '\n';

	while (n < 16)
	{
		if (n < 10)
		{
		putchar(n + 48);
		}
		else
		{
		putchar(n + 87);
		}
		n++;
	}
	putchar(r);
	return (0);
}

