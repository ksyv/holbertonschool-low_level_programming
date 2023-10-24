#include "main.h"
/**
 * strcmp - compares 2 string
 * @s1: first string
 * @s2: second string
 * Returns: 0 if the twice are equal
 * 	1 if the first is greater,
 * 	-1 if the first is smaller.
 */
int _strcmp(char *s1, char *s2)
{
	
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 > *s2)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

