#include "main.h"
/**
 * puts2 - print every other character of a string followed by a new line
 * @str: the array of tring character
 */
void puts2(char *str)
{
	int p = 0;

	while (str[p] != 0 && str[p + 1] != 0)
	{
		_putchar(*(str + p));
		p += 2;
	}
	if (str[p] != 0)
	{
		_putchar(*(str + p));
	}
	_putchar('\n');
}
