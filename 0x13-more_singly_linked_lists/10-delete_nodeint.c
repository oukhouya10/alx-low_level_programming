#include "lists.h"

/**
 *delete_nodeint_at_index -  function that deletes the node
 *at index index of a listint_t linked list.
 *@head:pointer to the head of the list
 *@index:index to be added
 *Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *cursor = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (i < index - 1)
	{
		if (!current || !(current->next))
			return (-1);
		current = current->next;
		i++;
	}
	cursor = current->next;
	current->next = cursor->next;
	free(cursor);
	return (1);
}
