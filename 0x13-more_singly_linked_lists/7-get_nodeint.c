#include "lists.h"

/**
 *get_nodeint_at_index -  function that returns the nth node
 *of a listint_t linked list
 *@head: pointer to the first node nth
 *@index: the index of the node
 *Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = head;
	unsigned int i = 0;

	while (cursor)
	{
		if (i == index)
			return (cursor);
		i++;
		cursor = cursor->next;
	}
	return (NULL);
}
