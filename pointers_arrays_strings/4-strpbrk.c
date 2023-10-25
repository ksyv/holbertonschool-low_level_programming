#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string who be scan
 * @accept: list of bytes accepted
 * Return: pointer to first byte accepted or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int t = 0, nc = 0, sc = 0;

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
				return (s + t);
			}
		}
		t++;
	}
	return (0);
}
