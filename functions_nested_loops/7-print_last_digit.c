#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the number intergrate
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	_putchar(l + 30);
	return (l + 30);
}
