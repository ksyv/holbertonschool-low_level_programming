#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * by index of a dlistint_t linked list.
 * @h: pointer to the first element of dlist_t
 * @idx: index of the node
 * @n: int in the node's data
 * Return: number of nodes
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary = *head;
	unsigned int searchindex = 0;

	if (*head == NULL)
		return (-1);

	for (searchindex = 1; searchindex < index; searchindex++)
	{
		if (temporary == NULL)
			return (-1);
		temporary = temporary->next;
	}

	if (temporary == *head)
	{
		*head = temporary->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temporary->prev->next = temporary->next;
		if (temporary->next != NULL)
			temporary->next->prev = temporary->prev;
	}
	free(temporary);
	return (1);
}
