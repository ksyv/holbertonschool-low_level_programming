#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string of destination
 * @src: string copied
 * @n: maximum bytes copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t = 0;

	while (*(src + t) != '\0' && t < n)
	{
		*(dest + t) = *(src + t);
		t++;
	}
	if (t < n)
	{
		*(dest + t) = *(src + t);
		t++;
		while (t < n)
		{
			*(dest + t) = '\0';
			t++;
		}
	}
	return (dest);
}
