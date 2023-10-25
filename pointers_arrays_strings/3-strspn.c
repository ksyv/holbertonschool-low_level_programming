#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string who be scan
 * @accept: list of bytes accepted
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0, v = 0;
	int nc = 0, sc = 0, temp = 0;

	while (*(accept + nc) != '\0')
	{
		nc++;
	}
	while (*(s + t) != '\0')
	{
		for (sc = 0; sc <= nc; sc++)
		{
			if (*(s + t) == *(accept + sc))
			{
				temp += 1;
			}
		}
		sc = 0;
		if (temp == 1)
		{
			v += 1;
			temp = 0;
		}
		else if (v > 0)
		{
			return (v);
		}
		t++;
	}
	return (0);
}
