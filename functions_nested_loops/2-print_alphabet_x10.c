#include "main.h"
/**
 * print_alphabet_X10 - print 10 times the alphabet in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int n = 97;
	int r = '\n';
	int t;

	for (t = 0; t < 10 ; t++)
	{
		while (n < 123)
		{
			_putchar (n);
			n++;
		}
	}
	_putchar (r);
}
