#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
	int n = 97;
	int r = '\n';

	while (n < 123)
	{
		_putchar (n);
		n++;
	}
	_putchar (r);
	return;
}
