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
	char *st = NULL;
	int len1 = 0, len2 = 0, lentot = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		continue;
	for (len2 = 0; s2[len2]; len2++)
		continue;
	lentot = len1 + len2;
	st = malloc((lentot + 1) * sizeof(char));
	if (st == NULL)
		return (NULL);
	while (i < lentot)
	{
		if (i < len1)
		{
			st[i] = s1[i];
			i++;
		}
		else
		{
			st[i] = s2[j];
			i++;
			j++;
		}
	}
	st[lentot + 1] = '\0';
	return (st);
}
