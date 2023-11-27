#include "lists.h"
#include <string.h>
/**
 * free_list - frees a list_t list.
 * @head: pointer to the first element of list_t
*/
void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
