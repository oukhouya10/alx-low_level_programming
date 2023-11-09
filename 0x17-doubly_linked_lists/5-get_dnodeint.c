#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a specific index starting from 0.
 * @head: head of doubly linked list
 * @index: index of node, starting from 0
 * Return: if the node does not exist - NULL
 *         Otherwise - the address of the located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
