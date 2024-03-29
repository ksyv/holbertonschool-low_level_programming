#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * by index of a dlistint_t linked list.
 * @h: pointer to the first element of dlist_t
 * @idx: index of the node
 * @n: int in the node's data
 * Return: number of nodes
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *newNode, *temporaryNode;
/*if idx == 0, insert the new node at the beggining*/
	if (idx == 0)
		return (add_dnodeint(h, n));
/*Run the list until idx*/
	temporaryNode = *h;
	for (index = 1; idx > index; index++)
	{
		temporaryNode = temporaryNode->next;
		if (temporaryNode == NULL)
			return (NULL);
	}
	if (temporaryNode->next == NULL)
		return (add_dnodeint_end(h, n));
/*insert the new node and adjust the previous and next pointers*/
	newNode =  malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = temporaryNode->next;
	newNode->prev = temporaryNode;
	temporaryNode->next->prev = newNode;
	temporaryNode->next = newNode;
	return (newNode);
}
