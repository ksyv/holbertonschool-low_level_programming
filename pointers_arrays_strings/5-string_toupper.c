#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: the string analysed
 * Return: new string
 */
char *string_toupper(char *a)
{
	int t = 0;

	while (*(a + t) != '\0')
	{
		if (*(a + t) > 96 && *(a + t) < 123)
		{
			*(a + t) -= 32;
		}
		t++;
	}
	return (a);
}
