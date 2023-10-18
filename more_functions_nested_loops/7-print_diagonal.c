#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: enter the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int l;
	int s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = l; s > 0; s--)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
