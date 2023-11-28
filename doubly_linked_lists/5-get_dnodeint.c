#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node design
 * by index of a dlistint_t linked list.
 * @head: pointer to the first element of dlist_t
 * @index: index of the node
 * Return: number of nodes
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int indexsearch = 0;

	for (indexsearch = 0; index != indexsearch && head != NULL; indexsearch++)
	{
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
