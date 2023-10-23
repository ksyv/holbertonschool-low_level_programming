#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: variable insert
 * Return: number of characters
 */
int _strlen(char *s)
{
	int ns = 0, p = 0;

	while (s[p] != 0)
	{
		ns++;
		p++;
	}
	return (ns);
}
