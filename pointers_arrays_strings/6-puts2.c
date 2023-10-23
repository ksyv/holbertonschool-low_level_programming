#include "main.h"
/**
 * puts2 - print every other character of a string followed by a new line
 * @str: the array of tring character
 */
void puts2(char *str)
{
	int p = 0;

	while (str[p] != 0)
	{
		p++;
		_putchar(*(str + p));
		p++;
	}
	_putchar('\n');
}
