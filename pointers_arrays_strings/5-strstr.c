#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string who be scan
 * @needle: list of bytes accepted
 * Return: pointer to the string who finded or 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int t = 0, v = 0, nc = 0, sc = 0, temp = 0;

	while (*(needle + nc) >= '\0')
	{
		nc++;
	}
	nc--;
	while (*(haystack + t) >= '\0')
	{
		if (*(haystack + t) == *(needle + sc))
		{
			temp = t;
			t++;
			sc++;
			v = 1;
			while (*(haystack + t) == *(needle + sc) && sc < nc)
			{
				v += 1;
				t++;
				sc++;
			}
			if (v == nc)
			{
				return (haystack + temp);
			}
			t = temp;
			sc = 0;
		}
		t++;
	}
	return ('\0');
}
