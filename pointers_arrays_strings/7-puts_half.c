#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the array of string character
 */
void puts_half(char *str)
{
	int p = 0;

	while (str[p] != 0)
	{
		p++;
	}
	p = p / 2;
	while (str[p] != 0)
	{
		_putchar(*(str + p));
		p++;
	}
	_putchar('\n');
}
