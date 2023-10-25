#include "main.h"
/**
 * _memcpy - copies n bytes from a memory area to another
 * @dest: area of destination
 * @src: area source
 * @n: number of bytes to be copied
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		*(dest + t) = *(src + t);
	}
	return (dest);
}
