#include "main.h"
/**
 * print_number - prints an integer with putchar only
 * @n: integer to be print
 */
void print_number(int n)
{	
	char numbers;
	int div, temp;

	/* define and print the sign, and unsigned the integer */
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	/* define lenght of n */
	temp = n;
	div = 1;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	/* print all numbers 1 by 1 */
	while (div > 1)
	{
		temp = n / div;
		numbers = temp;
		_putchar(numbers + '0');
		n -= temp * div;
		div /= 10;
	}
	numbers = n;
	_putchar(numbers + '0');
}
