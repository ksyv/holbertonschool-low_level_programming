#include "main.h"
/**
 * _islower - that checks for lowercase character
 * @c:  character who be check
 * Return: 1 if c is lowercase
 *	0 otherwise
 */
int _islower(int c)
{
	if (97 <= c && 122 >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
