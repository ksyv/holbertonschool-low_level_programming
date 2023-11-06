#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *  @s1: the first string
 *  @s2: second string
 *  Return: the adress of the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *st;
	int length, l1, l2, i, j;

	for (i = 0; s1[i]; i++)
	l1 = i;
	for (i = 0; s2[i]; i++)
	l2 = i;
	length = l1 + l2;
	st = malloc((length + 1) * sizeof(char));
	for (i = 0; i <= l1; i++)
		st[i] = s1[i];
	for (j = 0; i <= length + 1; i++)
	{
		st[i] = s2[j];
		j++;
	}
	return (st);
}
