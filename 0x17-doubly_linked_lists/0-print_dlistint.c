#include "lists.h"

/**
 * print_dlistint - Print all the values of each node in a `dlistint_t` list
 * @h: head pointer in doubly linked list
 * Return: Number of nodes in LL
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
