#include "lists.h"
/**
 * list_len - return the number of element in a linked list
 * @h: pointer to the first element of list_t
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
}
