#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: enter the number of times the character _ should be printed
 */
void print_line(int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
