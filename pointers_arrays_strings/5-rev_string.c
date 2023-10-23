#include "main.h"
/**
 * rev_string - print a string in reverse followed by a new line
 * @s: the array of tring character
 */
void rev_string(char *s)
{
	int p = 0, n = 0;
	int temp;

	while (s[p] != 0)
	{
		p++;
	}
	p--;
	while (p > n)
	{
		temp = *(s + n);
		*(s + n) = *(s + p);
		*(s + p) = temp;
		n++;
		p--;
	}
}
