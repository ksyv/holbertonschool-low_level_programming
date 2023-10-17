#include "main.h"
/**
 * times_table - print 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a < 10; a++)
	{
		b = 0;
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b;
			if (c < 10)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				d = c / 10;
				e = c % 10;
				_putchar(d + '0');
				_putchar(e + '0');
			}
		}
		_putchar('\n');
	}
}
