#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: a pointer to the head of the dlistint_t list
 * @n: the integer for the new node to contain.
 *
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	if (!head)
		return (0);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
	}

	return (new);
}
