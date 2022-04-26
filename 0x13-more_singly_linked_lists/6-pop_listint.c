#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 */
int pop_listint(listint_t **head)
{
	int nodedata;

	listint_t *new;

	if (*head == NULL)
		return (0);

	nodedata = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (nodedata);
}
