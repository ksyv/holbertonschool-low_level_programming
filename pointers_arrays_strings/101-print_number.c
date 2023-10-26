#include "main.h"
/**
 * print_number - prints an integer with putchar only
 * @n: integer to be print
 */
void print_number(int n)
{
	char numbers;
	int div, temp;
	unsigned int m = 1;

	/* define and print the sign, and unsigned the integer */
	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	};
	/* define lenght of n */
	temp = m;
	div = 1;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	/* print all numbers 1 by 1 */
	while (div > 1)
	{
		temp = m / div;
		numbers = temp;
		_putchar(numbers + '0');
		m -= temp * div;
		div /= 10;
	}
	numbers = m;
	_putchar(numbers + '0');
}
