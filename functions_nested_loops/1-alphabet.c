#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase, followed by a new line.
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
}
