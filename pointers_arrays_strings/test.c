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
	while (*s != '\0' || *s != c)
	{
		s++;
	}
	if (*s != '\0')
	{
		return (s);
	}
	return ('\0');
}
