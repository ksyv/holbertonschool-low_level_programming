#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - copy a given string and return pointer
 *  @str: the string
 *  Return: the adress of the new string
 */
char *_strdup(char *str)
{
	char *st;
	int length, i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	length = i + 1;
	st = malloc(length * sizeof(char));
	if (st == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		st[i] = str[i];
	st[length] = '\0';
	return (st);
}
