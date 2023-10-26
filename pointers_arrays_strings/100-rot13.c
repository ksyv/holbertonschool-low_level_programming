#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string of char who be encoded
 * Return: pointer to the beggin of the string
 */
char *rot13(char *s)
{
	int c, d;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (c = 0; s[c]; c++)
	{
		for (d = 0; a[d]; d++)
		{
			if (*(s + c) == *(a + d))
			{
				*(s + c) = *(b + d);
			}
		}
	}
	return (s);
}
