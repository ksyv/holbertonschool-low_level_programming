#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 97;
	char r = '\n';

	while (n < 123)
	{
		putchar(n);
		if (n != 101 && n != 113)
		{
			n++;
		}
		else
		{
			n = n + 2;
		}
	}
	putchar(r);
	return (0);
}

