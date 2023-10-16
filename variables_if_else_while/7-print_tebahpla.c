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
	char n = 122;
	char r = '\n';

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar(r);
	return (0);
}

