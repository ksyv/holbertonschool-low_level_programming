#include "main.h"
/**
 * print_sign - print the sign of a character
 * @n: character who test
 *
 * Return: 1 if > 0, 0 if = 0, -1 if < 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
