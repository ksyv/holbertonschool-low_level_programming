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
	int n = 48;
	int r = '\n';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar(r);
	return (0);
}

