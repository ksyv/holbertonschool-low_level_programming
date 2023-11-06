#include "main.h"
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
	length = i;
	st = malloc((length + 1) * sizeof(char));
	if (st == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		st[i] = str[i];
	st[length + 1] = '\0';
	return (st);
}
