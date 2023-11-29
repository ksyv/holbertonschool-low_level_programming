#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a new node at a given position
 * by index of a dlistint_t linked list.
 * @head: pointer to the first element of dlist_t
 * @index: index of the node
 * Return: 1 if succed, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary = *head;
	unsigned int searchindex = 0;

	if (*head == NULL)
		return (-1);

	for (searchindex = 0; searchindex != index; searchindex++)
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
