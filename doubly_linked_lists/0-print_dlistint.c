#include "lists.h"
/**
 * print_dlistint - search the first node
 * and print all the elements of a dlist_t list
 * @h: pointer to an element of list_t
 *Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
}
