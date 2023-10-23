#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: the array of tring character
 */
void print_rev(char *s)
{
	int p = 0, ns = 0;

	while (s[p] != 0)
	{
		ns++;
		p++;
	}
	while (p >= 0)
	{
		_putchar(*(s + p));
		p--;
	}
	_putchar('\n');
}
