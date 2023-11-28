#include "lists.h"
#include <string.h>
/**
 * add_dnodeint - add a node at the beggning of the list
 * @head: pointer to the first element of list_t
 * @n: int of the node
 * Return: adress of the new element or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode =  malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
