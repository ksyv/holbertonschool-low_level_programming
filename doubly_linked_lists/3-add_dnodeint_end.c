#include "lists.h"
#include <string.h>
/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: pointer to the first element of list_t
 * @n: int of the node
 * Return: adress of the new element or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;

	newNode =  malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	return (newNode);
}
