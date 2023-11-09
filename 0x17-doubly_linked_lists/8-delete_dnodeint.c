#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t at a given index
 * @head: a pointer to the head of the dlistint_t
 * @index: the index of the node to delete
 *
 * Return: upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *tmp;

	if (!head || !(*head))
		return (-1);
	tmp = *head;
	if (*head)
	{
		while (tmp)
		{
			if (node == index)
			{
				if (index)
					(tmp->prev)->next = tmp->next;
				else
					*head = tmp->next;
				if (tmp->next)
					(tmp->next)->prev = tmp->prev;
				free(tmp);
				return (1);
			}
			node++;
			tmp = tmp->next;
		}
	}

	return (-1);
}
