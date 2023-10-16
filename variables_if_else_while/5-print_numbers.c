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

	while (n < 10)
	{
	printf("%d", n);
	n++;
	}
	putchar(r);
	return (0);
}
