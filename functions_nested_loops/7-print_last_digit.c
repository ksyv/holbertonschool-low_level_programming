#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the number intergrate
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l);
	return (l);
}
