#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the square
 */
void print_triangle(int size)
{
	int sl;
	int ns;
	int s;
	int nd;

	if (size > 0)
	{
		for (sl = 0; sl <= size; sl++)
		{
			ns = size - sl;
			for (s = 0; s < ns; s++)
			{
				_putchar(' ');
			}
			nd = sl;
			for (; nd > 0; nd--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
