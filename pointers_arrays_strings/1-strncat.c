#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: string would be copied.
 * @dest: target
 * @n: n bytes max of src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int t1 = 0, t2 = 0;

	while (*(dest + t1) != '\0')
	{
		t1++;
	}
	while (*(src + t2) != '\0' && t2 < n)
	{
		*(dest + t1) = *(src + t2);
		t1++;
		t2++;
	}
	return (dest);

}
