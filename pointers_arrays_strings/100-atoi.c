#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string of base
 * Return: integrer who be convert
 */
int _atoi(char *s)
{
	int t = 0, r = 0, ns = 1;

	while (s[t] != 0)
	{
		if (s[t] == 45)
		{
			ns *= -1;
		}
		if (s[t] > 47 && s[t] < 58)
		{
			if (r > 0)
			{
				r *= 10;
			}
			r += *(s + t) - 48;
		}
		t++;
	}
	r *= ns;
	return (r);
}
