#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int
 */
void print_times_table(int n)
{
	int a;
	int b;

	if (n > 0 && n < 15)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a * b / 10 > 0)
				{
					_putchar(a * b / 10 + '0');
				}
				_putchar(a * b % 10 + '0');
				if (b < n - 1)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}

