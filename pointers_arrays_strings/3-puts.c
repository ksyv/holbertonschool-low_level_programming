#include "main.h"
/**
 * _puts - print a string followed by a new line
 * @str: the array of tring character
 */
void _puts(char *str)
{
	int p = 0;

	while (str[p] != 0)
	{
		_putchar(*(str + p));
		p++;
	}
}
