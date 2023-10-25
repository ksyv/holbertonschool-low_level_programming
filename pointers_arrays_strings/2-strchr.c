#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string of characters
 * @c: character who be located
 * Return: pointer to the first occurence of the character
 * or NULL.
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}
	return ('\0');
}
