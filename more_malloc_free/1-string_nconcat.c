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
	char *concat = NULL;
	unsigned int index1, index2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index1 = 0; s1[index1]; index1++)
		continue;
	for (index2 = 0; s2[index2]; index2++)
		continue;
	if (n >= index2)
		n = index2;
	concat = malloc(sizeof(char) * (index1 + n + 1));
	if (concat == NULL)
		return (NULL);
	for (index1 = 0; s1[index1]; index1++)
		concat[index1] = s1[index1];
	for (index2 = 0; index2 <= n; index2++)
		concat[index1 + index2] = s2[index2];
	return (concat);
}
