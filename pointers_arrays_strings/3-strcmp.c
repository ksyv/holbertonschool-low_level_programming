#include "main.h"
/**
 * _strcmp - compares 2 string
 * @s1: first string
 * @s2: second string
 * Return: 0 if the twice are equal,
 * positif if the first is greater,
 * negatif if the first is smaller.
 */
int _strcmp(char *s1, char *s2)
{
	int t = 0, r = 0;

	while (*(s1 + t) != '\0' && *(s2 + t) != '\0')
	{
		if (*(s1 + t) > *(s2 + t))
		{
			r += *(s1 + t) - *(s2 + t);
			return (r);
		}
		if (*(s1 + t) < *(s2 + t))
		{
			r -= *(s2 + t) - *(s1 + t);
			return (r);
		}
		t++;
	}
	return (r);

}
