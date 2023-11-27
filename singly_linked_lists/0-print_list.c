#include "lists.h"
/**
 * print_list - print all the elements of a list_t list
 * @h: pointer to the first element of list_t
 *Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
}
