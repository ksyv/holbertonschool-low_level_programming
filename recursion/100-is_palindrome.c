#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - return if testpalind is ok
 * @s: the string of character
 * Return: 1 if palind, 0 if not
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);
	int u = 0;

	if (*s == '\0')
	{
		return (1);
	}
	return (testpalind(s, l, u));
}
/**
 *  testpalind - test if is a palind
 *  @l: nmb of charac
 *  @s: string of cara
 *  @u: new index
 *  Return: 1 if s is a palind, 0 if not
 */
int testpalind(char *s, int l, int u)
{
	if (*(s + u) != *(s + (l - 1)))
	{
		return (0);
	}
	if  (u >= l)
	{
		return (1);
	}
	return (testpalind(s, l - 1, u + 1));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string of character
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
