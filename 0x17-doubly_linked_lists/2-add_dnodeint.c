#include "lists.h"

/**
 * add_dnodeint - adds new head node to dlist
 * @head: address of pointer to current head node
 * @n: int field of new node
 *
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (0);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
