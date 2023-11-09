#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of array's element
 * @size: size bytes of the elements
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memcalloc = NULL;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memcalloc = malloc(size * nmemb);
	if (memcalloc == NULL)
		return (NULL);
	for (index = 0; index < (size * nmemb); index++)
		memcalloc[index] = 0;
	return (memcalloc);
}
