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
		n++;
	}
	n = 65;

	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar(r);
	return (0);
}

