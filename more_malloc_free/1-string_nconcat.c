#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * char *string_nconcat - concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
 * @n : bytes of string 2 would be concatenated
 * Return: pointer to the memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st = NULL;
	unsigned int len1 = 0, len2 = 0, lentot = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		continue;
	for (len2 = 0; s2[len2]; len2++)
		continue;
	if (n > len2)
		n = len2;
	lentot = len1 + n;
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
		else if (j < n)
		{
			st[i] = s2[j];
			i++;
			j++;
		}
		else
		break;
	}
	st[lentot + 1] = '\0';
	return (st);
}
