#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: the string analysed
 * Return: new string
 */
char *leet(char *s)
{
	int v = 0, r = 0;
	char a[8];
	char b[8];

	a[0] = 'O';
	a[1] = 'L';
	a[3] = 'E';
	a[4] = 'A';
	a[7] = 'T';
	b[0] = 'o';
	b[1] = 'l';
	b[3] = 'e';
	b[4] = 'a';
	b[7] = 't';
	while (*(s + v) != '\0')
	{
		r = 0;
		while (r < 8)
		{
			if (*(s + v) == *(a + r) || *(s + v) == *(b + r))
			{
				*(s + v) = r + '0';
			}
			r++;
		}
		v++;
	}
	return (s);
}
