#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: string of destination
 * @src: string copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;

	while (*(src + t) != '\0')
	{
		*(dest + t) = *(src + t);
		t++;
	}
	*(dest + t) = *(src + t);
	return (dest);
}
