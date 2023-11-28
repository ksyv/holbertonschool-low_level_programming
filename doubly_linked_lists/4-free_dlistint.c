#include "lists.h"
#include <string.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the first element of list_t
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
