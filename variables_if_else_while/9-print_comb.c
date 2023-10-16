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
	int a = ' ';
	int r = '\n';

	while (n < 10)
	{
		putchar(n + 48);
		if (n < 9)
		{
		putchar(44);
		putchar(a);
		}
		n++;
	}
	putchar(r);
	return (0);
}
