#include "main.h"
/**
 * _isalpha - that checks for alphabetic character
 * @c:  character who be check
 * Return: 1 if c is alphabetic
 *	0 otherwise
 */
int _isalpha(int c)
{
	if ((97 <= c && 122 >= c) || (65 <= c && 90 >= c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
