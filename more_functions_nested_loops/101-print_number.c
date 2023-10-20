#include "main.h"
/**
 * print_number - prints a triangle, followed by a new line.
 * @n: number who want printed
 */
void print_number(int n)
{
	int nc = 1; /* nc is the number of character of n */
	int dnc;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	if (n < 1000000000)
	{
		while (n / nc != 0)
		{
			nc = nc * 10;
		}
	}
	else
	{
		nc = 1000000000;
		_putchar(n / 1000000000 + '0');
	}
	dnc = nc / 10;
	while (dnc >= 1)
	{
		_putchar(n % nc / dnc + '0');
		nc = nc / 10;
		dnc = nc / 10;
	}

}
