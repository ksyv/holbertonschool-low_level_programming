#include "lists.h"
/**
 * dlistint_len - return the number of element in a linked list
 * @h: pointer to the first element of dlist_t
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
}
