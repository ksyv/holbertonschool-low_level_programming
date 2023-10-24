#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @a: the string analysed
 * Return: new string
 */
char *cap_string(char *a)
{
	int t = 0;

	while (a[t] != '\0')
	{
		if (a[t - 1] == (' ') ||
				a[t - 1] == (' ') ||
				a[t - 1] == (';') ||
				a[t - 1] == ('.') ||
				a[t - 1] == ('!') ||
				a[t - 1] == ('?') ||
				a[t - 1] == ('"') ||
				a[t - 1] == ('(') ||
				a[t - 1] == (')') ||
				a[t - 1] == ('{') ||
				a[t - 1] == ('}') ||
				a[t - 1] == ('	') ||
				a[t - 1] == ('\n') ||
				t == 0)
		{
			if (*(a + t) > 96 && *(a + t) < 123)
			{
				*(a + t) -= 32;
			}
		}
		t++;
	}
	return (a);
}
