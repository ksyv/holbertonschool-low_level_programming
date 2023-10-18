#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: the character who checked
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
