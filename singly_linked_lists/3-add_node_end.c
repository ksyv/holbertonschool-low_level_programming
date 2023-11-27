#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a node at the end of the list
 * @head: pointer to the first element of list_t
 * @str: string of the first node
 * Return: adress of the new element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	char *newStr;
	unsigned int len = 0;

	newNode =  malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newStr = strdup(str);
	if (newStr == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (newStr[len] != 0)
		len++;
	newNode->str = newStr;
	newNode->len = len;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (newNode);
}
