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
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		continue;
	for (len2 = 0; s2[len2]; len2++)
		continue;
	st = malloc((len1 + len2 + 1) * sizeof(char));
	if (st == NULL)
		return(NULL);
	for (len1 = 0; s1[len1]; len1++)
		st[len1] = s1[len1];
	for (len2 = 0; s2[len2]; len2++)
	{
		st[len2 + len1] = s2[len2];
	}
	st [len2 + len1 + 1] = '\0';
	return (st);
}
