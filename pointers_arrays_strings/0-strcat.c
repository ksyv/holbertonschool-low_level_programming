#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: string would be copied.
 * @dest: target
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int t1 = 0, t2 = 0;

	while (*(dest + t1) != '\0')
	{
		t1++;
	}
	while (*(src + t2) != '\0')
	{
		*(dest + t1) = *(src + t2);
		t1++;
		t2++;
	}
	return (dest);

}
