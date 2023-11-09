#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint_t list.
 * @head: the head of the dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
